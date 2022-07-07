cmake_minimum_required(VERSION 3.15)
project(opencascade_test CXX)

add_executable(opencascade_test src/opencascade_test.cpp src/main.cpp)
target_include_directories(opencascade_test PUBLIC include)

install(TARGETS opencascade_test)
