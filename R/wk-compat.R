
#' @rdname as_geos_geometry
#' @export
as_geos_geometry.wk_wkb <- function(x, ...) {
  geos_read_wkb(x)
}

#' @rdname as_geos_geometry
#' @export
as_geos_geometry.wk_wkt <- function(x, ...) {
  geos_read_wkt(x)
}

#' @rdname as_geos_geometry
#' @export
as_geos_geometry.wk_wksxp <- function(x, ...) {
  geos_read_wkb(wk::wksxp_translate_wkb(x))
}

# dynamically registered in zzz.R
as_wkt.geos_geometry <- function(x, ..., include_z = TRUE, precision = 16, trim = TRUE) {
  wk::new_wk_wkt(
    geos_write_wkt(x, include_z = include_z, precision = precision, trim = trim)
  )
}

as_wkb.geos_geometry <- function(x, ..., include_z = TRUE, include_srid = FALSE, endian = 1) {
  # the GEOS WKB writer errors on empty point, but wk_wkb uses POINT (nan nan)
  is_empty_point <- (geos_type_id(x) == 1L) & geos_is_empty(x)

  if (any(is_empty_point)) {
    out <- rep_len(list(NULL), length(x))
    out[is_empty_point] <- wk::wkt_translate_wkb("POINT EMPTY")
    out[!is_empty_point] <- unclass(
      geos_write_wkb(
        x[!is_empty_point],
        include_z = include_z,
        include_srid = include_srid,
        endian = endian
      )
    )
  } else {
    out <- unclass(
      geos_write_wkb(
        x,
        include_z = include_z,
        include_srid = include_srid,
        endian = endian
      )
    )
  }

  wk::new_wk_wkb(out)
}

as_wksxp.geos_geometry <- function(x, ..., include_z = TRUE, include_srid = FALSE) {
  # rather than just use as_wkb(), we can represent empty points natively
  is_empty_point <- (geos_type_id(x) == 1L) & geos_is_empty(x)

  if (any(is_empty_point)) {
    out <- rep_len(list(NULL), length(x))
    out[is_empty_point] <- wk::wkt_translate_wksxp("POINT EMPTY")
    out[!is_empty_point] <- wk::wkb_translate_wksxp(
      geos_write_wkb(
        x[!is_empty_point],
        include_z = include_z,
        include_srid = include_srid
      )
    )
  } else {
    out <- wk::wkb_translate_wksxp(
      geos_write_wkb(
        x[!is_empty_point],
        include_z = include_z,
        include_srid = include_srid
      )
    )
  }

  wk::new_wk_wksxp(out)
}
