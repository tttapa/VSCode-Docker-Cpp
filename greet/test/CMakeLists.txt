# Add an executable with tests, and specify the source files to compile
add_executable(test-Greet test-Greet.cpp)
# Link the test executable with the Google Test main entry point and the library
# under test
target_link_libraries(test-Greet gtest_main greet)

# Add the tests to Google Test
include(GoogleTest)
gtest_discover_tests(test-Greet)