cmake_minimum_required(VERSION 3.8)

project( TestVehicleInfo C CXX )

set ( CMAKE_C_STANDARD 99 )
set ( CMAKE_CXX_STANDARD 11 )
set ( CMAKE_POSITION_INDEPENDENT_CODE ON )

set ( SOURCE_FILES
	../../SRC/VehicleInfo.c
	mock/mockVehicleInfo.cpp
	test_VehicleInfo.cpp
)

set ( HEADER_FILES 
	../../SRC/VehicleInfo.h
	mock/mockVehicleInfo.hpp
)

add_executable(TestVehicleInfo ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(TestVehicleInfo
    PRIVATE "fake"
)

target_link_libraries(TestVehicleInfo PRIVATE
		gtest_main
	)
	
target_compile_definitions(TestVehicleInfo  PRIVATE  DISABLE_EXT_INC )

target_link_libraries(TestVehicleInfo PRIVATE
		gtest_main
		gmock_main
	)

add_test(
    NAME TestVehicleInfo
    COMMAND TestVehicleInfo
)
