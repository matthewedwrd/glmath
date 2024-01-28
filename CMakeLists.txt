cmake_minimum_required(VERSION 3.10)
project(mylib C)

include_directories(include)

file(GLOB SOURCES "source/*.c")

add_library(glmath STATIC ${SOURCES})