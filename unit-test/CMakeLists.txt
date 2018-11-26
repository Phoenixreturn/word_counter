cmake_minimum_required (VERSION 3.8)

add_executable(unit-test unit-test.cpp)
target_link_libraries(unit-test gtest gmock_main LIB1)
enable_testing()
add_test(NAME example_test COMMAND unit-test "${CMAKE_CURRENT_LIST_DIR}/ABBA.txt")