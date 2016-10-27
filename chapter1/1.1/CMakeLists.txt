cmake_minimum_required(VERSION 3.6)

project(quick_search)

set(SOURCE_FILES CQuickSearch.cpp)

add_library(${PROJECT_NAME} ${SOURCE_FILES})

add_subdirectory(tests)
