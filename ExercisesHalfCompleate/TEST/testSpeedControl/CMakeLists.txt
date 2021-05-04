cmake_minimum_required(VERSION 3.8)

project( TestSpeedControl C CXX )

set ( CMAKE_C_STANDARD 99 )
set ( CMAKE_CXX_STANDARD 11 )
set ( CMAKE_POSITION_INDEPENDENT_CODE ON )
set ( gtest_force_shared_crt ON CACHE BOOL "" FORCE )

set ( SOURCE_FILES
	../../SRC/SpeedControl.c
	test_SpeedControl.cpp
)

set ( HEADER_FILES 
	../../SRC/SpeedControl.h
)

add_executable(TestSpeedControl ${SOURCE_FILES} ${HEADER_FILES})

target_compile_definitions(TestSpeedControl  PRIVATE  DISABLE_STATIC )

target_link_libraries(TestSpeedControl PRIVATE
		gtest_main
	)

add_test(
    NAME TestSpeedControl
    COMMAND TestSpeedControl
)
