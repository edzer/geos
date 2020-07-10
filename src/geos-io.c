
#include "libgeos.h"
#include "geos-common.h"
#include "Rinternals.h"

SEXP geos_c_read_wkt(SEXP input) {
  R_xlen_t size = Rf_xlength(input);
  SEXP result = PROTECT(Rf_allocVector(VECSXP, size));

  GEOS_INIT();
  GEOSWKTReader* reader = GEOSWKTReader_create_r(handle);

  GEOSGeometry* geometry;
  for (R_xlen_t i = 0; i < size; i++) {
    if (STRING_ELT(input, i) == NA_STRING) {
      SET_VECTOR_ELT(result, i, R_NilValue);
      continue;
    }

    geometry = GEOSWKTReader_read_r(handle, reader, CHAR(STRING_ELT(input, i)));

    // returns NULL on error
    if (geometry == NULL) {
      UNPROTECT(1); // result
      GEOSWKTReader_destroy_r(handle, reader);
      GEOS_ERROR("[i=%d] ", i);
    } else {
      SET_VECTOR_ELT(result, i, geos_common_geometry_xptr(geometry));
    }
  }

  GEOSWKTReader_destroy_r(handle, reader);
  GEOS_FINISH();
  UNPROTECT(1); // result
  return result;
}

SEXP geos_c_write_wkt(SEXP input) {
  R_xlen_t size = Rf_xlength(input);
  SEXP result = PROTECT(Rf_allocVector(STRSXP, size));

  GEOS_INIT();
  GEOSWKTWriter* writer = GEOSWKTWriter_create_r(handle);
  GEOSWKTWriter_setTrim_r(handle, writer, 1);
  GEOSWKTWriter_setOutputDimension_r(handle, writer, 3);

  SEXP item;
  GEOSGeometry* geometry;
  for (R_xlen_t i = 0; i < size; i++) {
    item = VECTOR_ELT(input, i);

    if (item == R_NilValue) {
      SET_STRING_ELT(result, i, NA_STRING);
      continue;
    }

    geometry = (GEOSGeometry*) R_ExternalPtrAddr(item);
    GEOS_CHECK_GEOMETRY(geometry, i);
    SET_STRING_ELT(result, i, Rf_mkChar(GEOSWKTWriter_write_r(handle, writer, geometry)));
  }

  GEOSWKTWriter_destroy_r(handle, writer);
  GEOS_FINISH();
  UNPROTECT(1); // result
  return result;
}

SEXP geos_c_read_wkb(SEXP input) {
  R_xlen_t size = Rf_xlength(input);
  SEXP result = PROTECT(Rf_allocVector(VECSXP, size));

  GEOS_INIT();
  GEOSWKBReader* reader = GEOSWKBReader_create_r(handle);

  GEOSGeometry* geometry;
  SEXP item;
  R_xlen_t itemSize;

  for (R_xlen_t i = 0; i < size; i++) {
    item = VECTOR_ELT(input, i);
    if (item == R_NilValue) {
      SET_VECTOR_ELT(result, i, R_NilValue);
      continue;
    }

    itemSize = Rf_xlength(item);
    geometry = GEOSWKBReader_read_r(handle, reader, RAW(item), itemSize);

    // returns NULL on error
    if (geometry == NULL) {
      UNPROTECT(1);
      GEOSWKBReader_destroy_r(handle, reader);
      GEOS_ERROR("[i=%d] ", i);
    } else {
      SET_VECTOR_ELT(result, i, geos_common_geometry_xptr(geometry));
    }
  }

  GEOSWKBReader_destroy_r(handle, reader);
  GEOS_FINISH();
  UNPROTECT(1);
  return result;
}

SEXP geos_c_write_wkb(SEXP input) {
  R_xlen_t size = Rf_xlength(input);
  SEXP result = PROTECT(Rf_allocVector(VECSXP, size));

  GEOS_INIT();
  GEOSWKBWriter* writer = GEOSWKBWriter_create_r(handle);
  GEOSWKBWriter_setOutputDimension_r(handle, writer, 3);

  SEXP item;
  GEOSGeometry* geometry;
  size_t itemSize;
  for (R_xlen_t i = 0; i < size; i++) {
    item = VECTOR_ELT(input, i);

    if (item == R_NilValue) {
      SET_VECTOR_ELT(result, i, R_NilValue);
      continue;
    }

    geometry = (GEOSGeometry*) R_ExternalPtrAddr(item);
    GEOS_CHECK_GEOMETRY(geometry, i);

    unsigned char* wkbPtr = GEOSWKBWriter_write_r(handle, writer, geometry, &itemSize);
    // returns NULL on error (e.g., when trying to write an empty point)
    if (wkbPtr == NULL) {
      UNPROTECT(1);
      GEOS_ERROR("[i=%d] ", i);
    }

    SEXP itemWKB = PROTECT(Rf_allocVector(RAWSXP, itemSize));
    memcpy(RAW(itemWKB), wkbPtr, itemSize);
    GEOSFree_r(handle, wkbPtr);
    SET_VECTOR_ELT(result, i, itemWKB);
    UNPROTECT(1); // itemWKB
  }

  GEOSWKBWriter_destroy_r(handle, writer);
  GEOS_FINISH();
  UNPROTECT(1); // result
  return result;
}
