cmake_minimum_required(VERSION 3.15)
project(opencascade_test CXX)

set(target opencascade_test)

find_package(OpenCASCADE REQUIRED)

add_executable(${target} src/opencascade_test.cpp src/main.cpp)
target_include_directories(${target} PUBLIC include)

target_link_libraries(${target}
    PUBLIC
    TKOpenGl TKV3d TKService TKPrim TKTopAlgo TKGeomAlgo TKBRep TKGeomBase TKG3d TKG2d TKMath TKernel
)

install(TARGETS opencascade_test)
