cmake_minimum_required(VERSION 3.10)
project(FactoryMethodExample)

set(CMAKE_CXX_STANDARD 14)

add_executable(FactoryMethod main.cpp)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Add the test executable
add_executable(FactoryMethodTests tests/ProductFactoryTests.cpp)
target_link_libraries(FactoryMethodTests gtest_main)

# Register tests
include(GoogleTest)
gtest_discover_tests(FactoryMethodTests)
