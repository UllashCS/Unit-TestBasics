cmake_minimum_required(VERSION 3.8)

project( TestWeek C CXX )

set ( CMAKE_C_STANDARD 99 )
set ( CMAKE_CXX_STANDARD 11 )
set ( CMAKE_POSITION_INDEPENDENT_CODE ON )
set ( gtest_force_shared_crt ON CACHE BOOL "" FORCE )

set ( SOURCE_FILES
	../../SRC/Week.cpp
	test_Week.cpp
)

set ( HEADER_FILES 
	../../SRC/Week.hpp
)

add_executable(TestWeek ${SOURCE_FILES} ${HEADER_FILES})

#target_compile_definitions(TestWeek  PRIVATE  DISABLE_STATIC )

target_link_libraries(TestWeek PRIVATE
		gtest_main
	)

add_test(
    NAME TestWeek
    COMMAND TestWeek
)
