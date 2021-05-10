cmake_minimum_required(VERSION 3.8)

project( SomeAppTest C CXX )

set ( CMAKE_C_STANDARD 99 )
set ( CMAKE_CXX_STANDARD 11 )
set ( CMAKE_POSITION_INDEPENDENT_CODE ON )
set ( gtest_force_shared_crt ON CACHE BOOL "" FORCE )

add_subdirectory(googletest)
enable_testing()

add_subdirectory (testDriverDistractionStatus)
add_subdirectory (testSpeedControl)
add_subdirectory (testVehicleInfo)
add_subdirectory (testWeek)
add_subdirectory (testMathOps)

