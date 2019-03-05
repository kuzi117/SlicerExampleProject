# All of our tests.
set(
  TEST_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/xosTest.c"
  PARENT_SCOPE
)

# The CuTest file.
set(
  CUTEST_FILE

    "${CMAKE_CURRENT_SOURCE_DIR}/CuTest.c"
  PARENT_SCOPE
)

# Set slice file locally to check for existence.
set(
  SLICE_FILE
    "${CMAKE_CURRENT_SOURCE_DIR}/testSlice.c"
)
if(NOT EXISTS "${SLICE_FILE}")
  message(STATUS "Expected slice file at ${SLICE_FILE}.")
  message(FATAL_ERROR "No test slice file found. Please run test slicing tool.")
endif()

# Set slice file in parent scope.
set(
  SLICE_FILE
    "${SLICE_FILE}"
  PARENT_SCOPE
)
