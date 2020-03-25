// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_convert
SEXP cpp_convert(SEXP data, SEXP ptype);
RcppExport SEXP _geom_cpp_convert(SEXP dataSEXP, SEXP ptypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptype(ptypeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_convert(data, ptype));
    return rcpp_result_gen;
END_RCPP
}
// cpp_version_impl
std::string cpp_version_impl();
RcppExport SEXP _geom_cpp_version_impl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cpp_version_impl());
    return rcpp_result_gen;
END_RCPP
}
// cpp_test_throw_error
void cpp_test_throw_error();
RcppExport SEXP _geom_cpp_test_throw_error() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    cpp_test_throw_error();
    return R_NilValue;
END_RCPP
}
// cpp_intersection
SEXP cpp_intersection(SEXP dataLeft, SEXP dataRight, SEXP ptype);
RcppExport SEXP _geom_cpp_intersection(SEXP dataLeftSEXP, SEXP dataRightSEXP, SEXP ptypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptype(ptypeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_intersection(dataLeft, dataRight, ptype));
    return rcpp_result_gen;
END_RCPP
}
// cpp_is_disjoint
LogicalVector cpp_is_disjoint(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_is_disjoint(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_is_disjoint(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_touches
LogicalVector cpp_touches(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_touches(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_touches(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_intersects
LogicalVector cpp_intersects(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_intersects(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_intersects(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_crosses
LogicalVector cpp_crosses(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_crosses(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_crosses(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_is_within
LogicalVector cpp_is_within(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_is_within(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_is_within(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_contains
LogicalVector cpp_contains(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_contains(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_contains(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_overlaps
LogicalVector cpp_overlaps(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_overlaps(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_overlaps(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_equals
LogicalVector cpp_equals(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_equals(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_equals(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_covers
LogicalVector cpp_covers(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_covers(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_covers(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_is_covered_by
LogicalVector cpp_is_covered_by(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_is_covered_by(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_is_covered_by(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_offset_curve
SEXP cpp_offset_curve(SEXP x, NumericVector width, int quadSegs, int endCapStyle, int joinStyle, double mitreLimit, SEXP to);
RcppExport SEXP _geom_cpp_offset_curve(SEXP xSEXP, SEXP widthSEXP, SEXP quadSegsSEXP, SEXP endCapStyleSEXP, SEXP joinStyleSEXP, SEXP mitreLimitSEXP, SEXP toSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type quadSegs(quadSegsSEXP);
    Rcpp::traits::input_parameter< int >::type endCapStyle(endCapStyleSEXP);
    Rcpp::traits::input_parameter< int >::type joinStyle(joinStyleSEXP);
    Rcpp::traits::input_parameter< double >::type mitreLimit(mitreLimitSEXP);
    Rcpp::traits::input_parameter< SEXP >::type to(toSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_offset_curve(x, width, quadSegs, endCapStyle, joinStyle, mitreLimit, to));
    return rcpp_result_gen;
END_RCPP
}
// cpp_buffer
SEXP cpp_buffer(SEXP x, NumericVector width, int quadSegs, int endCapStyle, int joinStyle, double mitreLimit, int singleSided, SEXP to);
RcppExport SEXP _geom_cpp_buffer(SEXP xSEXP, SEXP widthSEXP, SEXP quadSegsSEXP, SEXP endCapStyleSEXP, SEXP joinStyleSEXP, SEXP mitreLimitSEXP, SEXP singleSidedSEXP, SEXP toSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type quadSegs(quadSegsSEXP);
    Rcpp::traits::input_parameter< int >::type endCapStyle(endCapStyleSEXP);
    Rcpp::traits::input_parameter< int >::type joinStyle(joinStyleSEXP);
    Rcpp::traits::input_parameter< double >::type mitreLimit(mitreLimitSEXP);
    Rcpp::traits::input_parameter< int >::type singleSided(singleSidedSEXP);
    Rcpp::traits::input_parameter< SEXP >::type to(toSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_buffer(x, width, quadSegs, endCapStyle, joinStyle, mitreLimit, singleSided, to));
    return rcpp_result_gen;
END_RCPP
}
// cpp_project
NumericVector cpp_project(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_project(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_project(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_project_normalized
NumericVector cpp_project_normalized(SEXP dataLeft, SEXP dataRight);
RcppExport SEXP _geom_cpp_project_normalized(SEXP dataLeftSEXP, SEXP dataRightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_project_normalized(dataLeft, dataRight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_interpolate
SEXP cpp_interpolate(SEXP data, SEXP ptype, NumericVector distance);
RcppExport SEXP _geom_cpp_interpolate(SEXP dataSEXP, SEXP ptypeSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptype(ptypeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_interpolate(data, ptype, distance));
    return rcpp_result_gen;
END_RCPP
}
// cpp_interpolate_normalized
SEXP cpp_interpolate_normalized(SEXP data, SEXP ptype, NumericVector distance);
RcppExport SEXP _geom_cpp_interpolate_normalized(SEXP dataSEXP, SEXP ptypeSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptype(ptypeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_interpolate_normalized(data, ptype, distance));
    return rcpp_result_gen;
END_RCPP
}
// cpp_area
NumericVector cpp_area(SEXP x);
RcppExport SEXP _geom_cpp_area(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_area(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_length
NumericVector cpp_length(SEXP x);
RcppExport SEXP _geom_cpp_length(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_length(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_distance
NumericVector cpp_distance(SEXP x, SEXP y);
RcppExport SEXP _geom_cpp_distance(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_distance(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cpp_is_empty
LogicalVector cpp_is_empty(SEXP data);
RcppExport SEXP _geom_cpp_is_empty(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_is_empty(data));
    return rcpp_result_gen;
END_RCPP
}
// cpp_is_simple
LogicalVector cpp_is_simple(SEXP data);
RcppExport SEXP _geom_cpp_is_simple(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_is_simple(data));
    return rcpp_result_gen;
END_RCPP
}
// cpp_has_z
LogicalVector cpp_has_z(SEXP data);
RcppExport SEXP _geom_cpp_has_z(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_has_z(data));
    return rcpp_result_gen;
END_RCPP
}
// cpp_is_closed
LogicalVector cpp_is_closed(SEXP data);
RcppExport SEXP _geom_cpp_is_closed(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_is_closed(data));
    return rcpp_result_gen;
END_RCPP
}
// cpp_validate_provider
LogicalVector cpp_validate_provider(SEXP data);
RcppExport SEXP _geom_cpp_validate_provider(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_validate_provider(data));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_geom_cpp_convert", (DL_FUNC) &_geom_cpp_convert, 2},
    {"_geom_cpp_version_impl", (DL_FUNC) &_geom_cpp_version_impl, 0},
    {"_geom_cpp_test_throw_error", (DL_FUNC) &_geom_cpp_test_throw_error, 0},
    {"_geom_cpp_intersection", (DL_FUNC) &_geom_cpp_intersection, 3},
    {"_geom_cpp_is_disjoint", (DL_FUNC) &_geom_cpp_is_disjoint, 2},
    {"_geom_cpp_touches", (DL_FUNC) &_geom_cpp_touches, 2},
    {"_geom_cpp_intersects", (DL_FUNC) &_geom_cpp_intersects, 2},
    {"_geom_cpp_crosses", (DL_FUNC) &_geom_cpp_crosses, 2},
    {"_geom_cpp_is_within", (DL_FUNC) &_geom_cpp_is_within, 2},
    {"_geom_cpp_contains", (DL_FUNC) &_geom_cpp_contains, 2},
    {"_geom_cpp_overlaps", (DL_FUNC) &_geom_cpp_overlaps, 2},
    {"_geom_cpp_equals", (DL_FUNC) &_geom_cpp_equals, 2},
    {"_geom_cpp_covers", (DL_FUNC) &_geom_cpp_covers, 2},
    {"_geom_cpp_is_covered_by", (DL_FUNC) &_geom_cpp_is_covered_by, 2},
    {"_geom_cpp_offset_curve", (DL_FUNC) &_geom_cpp_offset_curve, 7},
    {"_geom_cpp_buffer", (DL_FUNC) &_geom_cpp_buffer, 8},
    {"_geom_cpp_project", (DL_FUNC) &_geom_cpp_project, 2},
    {"_geom_cpp_project_normalized", (DL_FUNC) &_geom_cpp_project_normalized, 2},
    {"_geom_cpp_interpolate", (DL_FUNC) &_geom_cpp_interpolate, 3},
    {"_geom_cpp_interpolate_normalized", (DL_FUNC) &_geom_cpp_interpolate_normalized, 3},
    {"_geom_cpp_area", (DL_FUNC) &_geom_cpp_area, 1},
    {"_geom_cpp_length", (DL_FUNC) &_geom_cpp_length, 1},
    {"_geom_cpp_distance", (DL_FUNC) &_geom_cpp_distance, 2},
    {"_geom_cpp_is_empty", (DL_FUNC) &_geom_cpp_is_empty, 1},
    {"_geom_cpp_is_simple", (DL_FUNC) &_geom_cpp_is_simple, 1},
    {"_geom_cpp_has_z", (DL_FUNC) &_geom_cpp_has_z, 1},
    {"_geom_cpp_is_closed", (DL_FUNC) &_geom_cpp_is_closed, 1},
    {"_geom_cpp_validate_provider", (DL_FUNC) &_geom_cpp_validate_provider, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_geom(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
