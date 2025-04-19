cmake_minimum_required(VERSION 3.10)
project(FactoryMethodPattern)

set(CMAKE_CXX_STANDARD 14)

# Add the main executable
add_executable(FactoryMethodLabTest main.cpp)

# Setup Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Add the test executable
add_executable(VehicleTests tests/VehicleTests.cpp)
target_link_libraries(VehicleTests gtest_main)

# Register tests
include(GoogleTest)
gtest_discover_tests(VehicleTests)
