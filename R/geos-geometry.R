
#' Create GEOS Geometry Vectors
#'
#' @param x An object to be coerced to a geometry vector
#' @param ... Unused
#'
#' @return A geos geometry vector
#' @export
#'
#' @examples
#' as_geos_geometry("LINESTRING (0 1, 3 9)")
#'
as_geos_geometry <- function(x, ...) {
  UseMethod("as_geos_geometry")
}

#' @rdname as_geos_geometry
#' @export
as_geos_geometry.geos_geometry <- function(x, ...) {
  x
}

#' @rdname as_geos_geometry
#' @export
as_geos_geometry.character <- function(x, ...) {
  geos_read_wkt(x)
}

#' @rdname as_geos_geometry
#' @export
as_geos_geometry.wk_wkt <- function(x, ...) {
  geos_read_wkt(x)
}

#' @rdname as_geos_geometry
#' @export
as_geos_geometry.blob <- function(x, ...) {
  geos_read_wkb(x)
}

#' @rdname as_geos_geometry
#' @export
as_geos_geometry.WKB <- function(x, ...) {
  geos_read_wkb(x)
}

#' @rdname as_geos_geometry
#' @export
as_geos_geometry.wk_wkb <- function(x, ...) {
  geos_read_wkb(x)
}

# dynamically registered in zzz.R
as_wkt.geos_geometry <- function(x, ..., include_z = TRUE, precision = 16, trim = TRUE) {
  wk::new_wk_wkt(
    geos_write_wkt(x, include_z = include_z, precision = precision, trim = trim)
  )
}
as_wkb.geos_geometry <- function(x, ..., include_z = TRUE, include_srid = FALSE, endian = 1) {
  wk::new_wk_wkb(
    unclass(geos_write_wkb(x, include_z = include_z, include_srid = include_srid, endian = endian))
  )

}

#' Create vectors of GEOS geometry objects
#'
#' @param x A bare `list()` of external pointers
#' @param class A character vector subclass
#' @param ... Unused
#'
#' @return An object of class geos_geometry
#' @noRd
#'
new_geos_geometry <- function(x = list(), class = character()) {
  if (!is.list(x) || is.object(x)) {
    stop("x must be a bare list of 'externalptr' objects")
  }

  structure(x, class = "geos_geometry")
}

validate_geos_geometry <- function(x) {
  type <- vapply(unclass(x), typeof, character(1))
  valid_items <- type %in% c("externalptr", "NULL")
  if (any(!valid_items)) {
    stop("Items must be externalptr objects or NULL")
  }

  invisible(x)
}

#' @export
is.na.geos_geometry <- function(x) {
  vapply(unclass(x), is.null, logical(1))
}

#' @export
`[.geos_geometry` <- function(x, i) {
  new_geos_geometry(NextMethod(), class(x))
}

# makes lapply() along these vectors possible
#' @export
`[[.geos_geometry` <- function(x, i) {
  x[i]
}

#' @export
`c.geos_geometry` <- function(...) {
  # make sure all items inherit the same top-level class
  dots <- list(...)
  inherits_first <- vapply(dots, inherits, "geos_geometry", FUN.VALUE = logical(1))
  if (!all(inherits_first)) {
    stop(sprintf("All items must inherit from 'geos_geometry'"), call. = FALSE)
  }

  geometry <- new_geos_geometry(NextMethod(), class(dots[[1]]))
  validate_geos_geometry(geometry)
  geometry
}

#' @export
rep.geos_geometry <- function(x, ...) {
  new_geos_geometry(NextMethod(), class(x))
}

#' @method rep_len geos_geometry
#' @export
rep_len.geos_geometry <- function(x, length.out) {
  rep(x, length.out = length.out)
}

#' @export
format.geos_geometry <- function(x, ..., precision = 5, trim = TRUE) {
  geos_write_wkt(x, precision = precision, trim = trim)
}

#' @export
print.geos_geometry <- function(x, ...) {
  cat(sprintf("<%s[%s]>\n", class(x)[1], length(x)))
  if (length(x) == 0) {
    return(invisible(x))
  }

  out <- stats::setNames(format(x, ...), names(x))
  print(out, quote = FALSE)
  invisible(x)
}