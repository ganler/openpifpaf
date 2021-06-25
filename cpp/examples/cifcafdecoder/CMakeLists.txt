CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
PROJECT(pifpaf)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
SET(CMAKE_CXX_STANDARD 17)
set(BIN "decoder-example")
file(GLOB SRC *.cpp)

add_executable(${BIN} ${SRC})