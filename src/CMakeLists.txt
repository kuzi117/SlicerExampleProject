# Get subdirectory variables.
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/tests")

# Set tool source.
set(
  TOOL_SOURCE
    "${CMAKE_CURRENT_SOURCE_DIR}/main.c"
)

# Set test souces (driver + subfiles).
set(
  TEST_SOURCE
    "${CMAKE_CURRENT_SOURCE_DIR}/test.c"
    ${TEST_FILES}
    ${CUTEST_FILE}
    ${SLICE_FILE}
)

# Add executables.
add_executable(runTests ${TEST_SOURCE})
