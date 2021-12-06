cmake_minimum_required(VERSION 3.1)
project(week2_task1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BINARY_DIR "/home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/bin")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_executable(task_1 task_1.cpp)
