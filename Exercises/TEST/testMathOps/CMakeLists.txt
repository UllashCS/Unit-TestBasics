cmake_minimum_required(VERSION 3.8)

project( TestMathOps C CXX )

set ( CMAKE_C_STANDARD 99 )
set ( CMAKE_CXX_STANDARD 11 )
set ( CMAKE_POSITION_INDEPENDENT_CODE ON )
set ( gtest_force_shared_crt ON CACHE BOOL "" FORCE )

set ( SOURCE_FILES
	../../SRC/MathOps.cpp
	../../SRC/Utils.cpp
	test_MathOps.cpp
	mock/mockMathOps.cpp
)

set ( HEADER_FILES 
	../../SRC/MathOps.hpp
	../../SRC/Utils.hpp
	mock/mockMathOps.hpp
)

add_executable(TestMathOps ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(TestMathOps PRIVATE
		gtest_main
		gmock_main
	)

add_test(
    NAME TestMathOps
    COMMAND TestMathOps
)
