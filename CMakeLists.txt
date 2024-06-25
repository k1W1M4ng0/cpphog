cmake_minimum_required(VERSION 3.20)

project(cpphog)

find_package(PkgConfig REQUIRED)

pkg_check_modules(PROTO REQUIRED protobuf)
pkg_check_modules(ZMQ REQUIRED cppzmq)

file(GLOB_RECURSE sources src/*.cpp src/*.cc src/*.h)

set(CMAKE_CXX_STANDARD 20)

add_executable(main ${sources})

target_include_directories(main PRIVATE ${PROTO_INCLUDE_DIRS})
target_include_directories(main PRIVATE ${ZMQ_cppzmq_INCLUDEDIR})

target_include_directories(main PRIVATE src)

target_link_libraries(main PRIVATE ${PROTO_LIBRARIES})
target_link_libraries(main PRIVATE ${ZMQ_cppzmq_LIBDIR})
