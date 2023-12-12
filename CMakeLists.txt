cmake_minimum_required(VERSION 3.28)

project(cpp_test_ci)

find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME}  PRIVATE GTest::GTest GTest::Main)

target_include_directories(${PROJECT_NAME} PRIVATE ${GTEST_INCLUDE_DIRS})
