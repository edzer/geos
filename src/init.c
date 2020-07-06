
#include "libgeos.h"
#include <Rinternals.h>

/* generated by data-raw/make_callentries.R */
extern SEXP geos_c_segment_intersection(SEXP ax0, SEXP ay0, SEXP ax1, SEXP ay1, SEXP bx0, SEXP by0, SEXP bx1, SEXP by1);
extern SEXP geos_c_orientation_index(SEXP Ax, SEXP Ay, SEXP Bx, SEXP By, SEXP Px, SEXP Py);
extern SEXP geos_c_init();
extern SEXP geos_c_version_runtime();
extern SEXP geos_c_version_build();

static const R_CallMethodDef CallEntries[] = {
  {"geos_c_segment_intersection", (DL_FUNC) &geos_c_segment_intersection, 8},
  {"geos_c_orientation_index", (DL_FUNC) &geos_c_orientation_index, 6},
  {"geos_c_init", (DL_FUNC) &geos_c_init, 0},
  {"geos_c_version_runtime", (DL_FUNC) &geos_c_version_runtime, 0},
  {"geos_c_version_build", (DL_FUNC) &geos_c_version_build, 0},
  {NULL, NULL, 0}
};
/* end generated by data-raw/make_callentries.R */

void R_init_geos(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}

SEXP geos_c_init() {
  libgeos_init_api();
  return R_NilValue;
}

SEXP geos_c_version_runtime() {
  SEXP out = PROTECT(Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(out, 0, Rf_mkChar(GEOSversion()));
  UNPROTECT(1);
  return out;
}

SEXP geos_c_version_build() {
  SEXP out = PROTECT(Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(out, 0, Rf_mkChar(GEOS_CAPI_VERSION));
  UNPROTECT(1);
  return out;
}