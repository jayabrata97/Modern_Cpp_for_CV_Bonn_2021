# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/build

# Include any dependencies generated for this target.
include CMakeFiles/task_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task_1.dir/flags.make

CMakeFiles/task_1.dir/task_1.cpp.o: CMakeFiles/task_1.dir/flags.make
CMakeFiles/task_1.dir/task_1.cpp.o: ../task_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task_1.dir/task_1.cpp.o"
	$(CMAKE_COMMAND) -E __run_co_compile --tidy=/usr/bin/clang-tidy --cppcheck="/usr/bin/cppcheck;--enable=all;--suppress=missingInclude;--inconclusive" --source=/home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/task_1.cpp -- /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task_1.dir/task_1.cpp.o -c /home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/task_1.cpp

CMakeFiles/task_1.dir/task_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task_1.dir/task_1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/task_1.cpp > CMakeFiles/task_1.dir/task_1.cpp.i

CMakeFiles/task_1.dir/task_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task_1.dir/task_1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/task_1.cpp -o CMakeFiles/task_1.dir/task_1.cpp.s

# Object files for target task_1
task_1_OBJECTS = \
"CMakeFiles/task_1.dir/task_1.cpp.o"

# External object files for target task_1
task_1_EXTERNAL_OBJECTS =

../bin/task_1: CMakeFiles/task_1.dir/task_1.cpp.o
../bin/task_1: CMakeFiles/task_1.dir/build.make
../bin/task_1: CMakeFiles/task_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/task_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task_1.dir/build: ../bin/task_1

.PHONY : CMakeFiles/task_1.dir/build

CMakeFiles/task_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task_1.dir/clean

CMakeFiles/task_1.dir/depend:
	cd /home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1 /home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1 /home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/build /home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/build /home/jayabrata/Modern_C++_for_CV/homework/homework_2/task_1/build/CMakeFiles/task_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task_1.dir/depend

