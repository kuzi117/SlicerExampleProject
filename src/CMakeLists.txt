# Get subdirectory variables.
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/tests")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/xos")

# Set tool source.
set(
  TOOL_SOURCE
    ${XO_SOURCE}
)
set(
  TOOL_MAIN_SOURCE
  ${TOOL_SOURCE}
  "${CMAKE_CURRENT_SOURCE_DIR}/main.c"
)

# Set test souces (driver + subfiles).
set(
  TEST_SOURCE
    "${CMAKE_CURRENT_SOURCE_DIR}/test.c"
    ${TEST_FILES}
    ${CUTEST_FILE}
    ${SLICE_FILE}
    ${TOOL_SOURCE}
)

# Add executables.
add_executable(runTests ${TEST_SOURCE})
