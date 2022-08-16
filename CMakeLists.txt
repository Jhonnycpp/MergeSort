cmake_minimum_required(VERSION 3.10)

project(MergeSort)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

set(WORKSPACE ${PROJECT_SOURCE_DIR})

SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${WORKSPACE}/build)
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${WORKSPACE}/build)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${WORKSPACE}/build)

set(SOURCES
    ${WORKSPACE}/src/sort.c
    ${WORKSPACE}/src/merge.c
    ${WORKSPACE}/src/mergesort.c
    ${WORKSPACE}/main.c
)

include_directories(${WORKSPACE}/headers)

add_executable(MergeSort ${SOURCES})