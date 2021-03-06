% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/geos-unary-atomic.R
\name{geos_is_valid}
\alias{geos_is_valid}
\alias{geos_is_valid_detail}
\title{Geometry validity}
\usage{
geos_is_valid(geom)

geos_is_valid_detail(geom, allow_self_touching_ring_forming_hole = FALSE)
}
\arguments{
\item{geom}{A \link[=as_geos_geometry]{GEOS geometry vector}}

\item{allow_self_touching_ring_forming_hole}{It's all in the name}
}
\description{
\itemize{
\item \code{\link[=geos_is_valid]{geos_is_valid()}} returns a logical vector denoting if each feature
is a valid geometry.
\item \code{\link[=geos_is_valid_detail]{geos_is_valid_detail()}} returns a data frame with columns \code{is_valid} (logical),
\code{reason} (character), and \code{location} (\link[=as_geos_geometry]{geos_geometry}).
}
}
\examples{
geos_is_valid(
  c(
    "POLYGON ((0 0, 1 0, 1 1, 0 1, 0 0))",
    "POLYGON ((0 0, 1 1, 1 0, 0 1, 0 0))"
  )
)

geos_is_valid_detail(
  c(
    "POLYGON ((0 0, 1 0, 1 1, 0 1, 0 0))",
    "POLYGON ((0 0, 1 1, 1 0, 0 1, 0 0))"
  )
)

}
