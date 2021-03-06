
test_that("geos_geometry can be created from wk package classes", {
  expect_is(as_geos_geometry(wk::as_wkb("POINT (30 10)")), "geos_geometry")
  expect_is(as_geos_geometry(wk::as_wkt("POINT (30 10)")), "geos_geometry")
  expect_is(as_geos_geometry(wk::as_wksxp("POINT (30 10)")), "geos_geometry")
})

test_that("coercion to wk::wkt and wk::wkb", {
  expect_identical(wk::as_wkt(as_geos_geometry("POINT (0 1)")), wk::wkt("POINT (0 1)"))
  expect_identical(wk::as_wkb(as_geos_geometry("POINT (0 1)")), wk::as_wkb("POINT (0 1)"))
  expect_identical(wk::as_wksxp(as_geos_geometry("POINT (0 1)")), wk::as_wksxp("POINT (0 1)"))

  # check empty point conversion!
  expect_identical(wk::as_wkb(as_geos_geometry("POINT EMPTY")), wk::as_wkb("POINT EMPTY"))
  expect_identical(wk::as_wksxp(as_geos_geometry("POINT EMPTY")), wk::as_wksxp("POINT EMPTY"))
})
