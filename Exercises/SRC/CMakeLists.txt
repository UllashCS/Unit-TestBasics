cmake_minimum_required(VERSION 3.8)

project( SomeApp C CXX )

set ( CMAKE_C_STANDARD 99 )
set ( CMAKE_CXX_STANDARD 11 )
set ( CMAKE_POSITION_INDEPENDENT_CODE ON )
set ( gtest_force_shared_crt ON CACHE BOOL "" FORCE )

set ( SOURCE_FILES_C
	main.c
	SpeedControl.c
	VehicleInfo.c
	DriverDistractionStatus.c
	../External/AccessMemory.c
)

set ( HEADER_FILES_C
	SpeedControl.h
	VehicleInfo.h
	DriverDistractionStatus.h
	../External/AccessMemory.h
)

add_executable(SomeAppC ${SOURCE_FILES_C} ${HEADER_FILES_C})

set ( SOURCE_FILES_CPP
	main.cpp
	Week.cpp
	MathOps.cpp
	Utils.cpp
)

set ( HEADER_FILES_CPP
	Week.hpp
	MathOps.hpp
	Utils.hpp
)

add_executable(SomeAppCPP ${SOURCE_FILES_CPP} ${HEADER_FILES_CPP})
