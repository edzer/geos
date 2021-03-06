% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/geos-strtree.R
\name{geos_strtree}
\alias{geos_strtree}
\alias{geos_strtree_query}
\alias{geos_strtree_data}
\alias{as_geos_strtree}
\alias{as_geos_strtree.default}
\alias{as_geos_strtree.geos_strtree}
\alias{as_geos_strtree.geos_geometry}
\title{Create a GEOS STRTree}
\usage{
geos_strtree(geom)

geos_strtree_query(tree, geom)

geos_strtree_data(tree)

as_geos_strtree(x, ...)

\method{as_geos_strtree}{default}(x, ...)

\method{as_geos_strtree}{geos_strtree}(x, ...)

\method{as_geos_strtree}{geos_geometry}(x, ...)
}
\arguments{
\item{geom}{A \link[=as_geos_geometry]{GEOS geometry vector}}

\item{tree}{A \code{\link[=geos_strtree]{geos_strtree()}}}

\item{x}{An object to convert to a \code{\link[=geos_strtree]{geos_strtree()}}}

\item{...}{Unused}
}
\value{
A geos_str_tree object
}
\description{
Create a GEOS STRTree
}
