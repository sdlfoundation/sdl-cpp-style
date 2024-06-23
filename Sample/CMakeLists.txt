cmake_minimum_required(VERSION 3.2)

project(Sample VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#add_library(Sample STATIC ${SOURCES})
add_executable(Sample Source/Sample.cpp)

set_target_properties(Sample PROPERTIES
    VERSION ${PROJECT_VERSION}
    OUTPUT_NAME "Sample"
)

if (NOT TARGET sdl-utils)
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Dependencies/sdl-utils)
endif()

target_include_directories(Sample PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Dependencies/sdl-utils/Include)
target_link_libraries(Sample sdl-utils)
