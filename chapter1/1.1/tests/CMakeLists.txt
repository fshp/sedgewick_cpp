cmake_minimum_required(VERSION 3.6)

project(quick_search_test)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

set(SOURCE_FILES CQuickSearchTest.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_compile_definitions(${PROJECT_NAME} PRIVATE "BOOST_TEST_DYN_LINK=1")

target_include_directories(${PROJECT_NAME} PUBLIC quick_search)

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES} quick_search)

add_test(${PROJECT_NAME} ${PROJECT_NAME})
