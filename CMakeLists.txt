cmake_minimum_required(VERSION 3.0)
project(qt5-pluginpath)

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
	SET(CMAKE_PREFIX_PATH "C:/Qt/5.11.2/msvc2017_64/lib/cmake/")
else()
	SET(CMAKE_PREFIX_PATH "C:/Qtx86/5.11.2/msvc2015/lib/cmake/")
endif()

find_package(Qt5Core REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

add_executable(qtPaths qtPaths.cpp)
target_link_libraries(qtPaths Qt5::Core)
