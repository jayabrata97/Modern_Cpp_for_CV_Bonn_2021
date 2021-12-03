cmake_minimum_required(VERSION 3.1)
project(my_library)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories (./include)
add_library(ipb_arithmetic src/subtract.cpp src/sum.cpp)
add_executable(main src/main.cpp)
target_link_libraries(main ipb_arithmetic)
