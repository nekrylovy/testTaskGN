cmake_minimum_required(VERSION 3.22)

project(testTaskGN)

include_directories(include)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -O0 -g")

add_executable(AntMovements src/Cell.cpp src/main.cpp)