cmake_minimum_required(VERSION 3.16)
project(week2_task1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_BINARY_DIR "/home/jayabrata/Modern_Cpp_for_CV_Bonn_2021/homework/homework_2/task_1/bin")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_executable(task_1 task_1.cpp)
