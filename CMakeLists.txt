cmake_minimum_required(VERSION 3.12)

project(myproject)

find_package(Curses REQUIRED)

set(CMAKE_CXX_STANDARD 11)

add_executable(exe main.cpp questions.cpp questions.h)

target_link_libraries(exe ${CURSES_LIBRARIES})

