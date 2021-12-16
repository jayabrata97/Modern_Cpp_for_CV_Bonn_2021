cmake_minimum_required(VERSION 3.16)
project(week2_task2)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BINARY_DIR "/home/jayabrata/Modern_Cpp_for_CV_Bonn_2021/homework/homework_2/task_2/bin")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_executable(task_2 task_2.cpp)
