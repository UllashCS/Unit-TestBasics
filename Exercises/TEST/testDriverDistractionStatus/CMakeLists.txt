cmake_minimum_required(VERSION 3.8)

project( TestDDStatus C CXX )

set ( CMAKE_C_STANDARD 99 )
set ( CMAKE_CXX_STANDARD 11 )
set ( CMAKE_POSITION_INDEPENDENT_CODE ON )
set ( gtest_force_shared_crt ON CACHE BOOL "" FORCE )


set ( SOURCE_FILES
	../../SRC/DriverDistractionStatus.c
	test_DDSStatus.cpp
)

set ( HEADER_FILES 
	../../SRC/DriverDistractionStatus.h
)

add_executable(TestDDStatus ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(TestDDStatus PRIVATE
		gtest_main
	)
	
target_compile_definitions(TestDDStatus  PRIVATE  DISABLE_STATIC )

add_test(
    NAME TestDDStatus
    COMMAND TestDDStatus
)
