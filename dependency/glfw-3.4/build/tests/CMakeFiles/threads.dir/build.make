# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aaron/Desktop/workspace/glfw-3.4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aaron/Desktop/workspace/glfw-3.4/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/threads.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/threads.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/threads.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/threads.dir/flags.make

tests/CMakeFiles/threads.dir/threads.c.o: tests/CMakeFiles/threads.dir/flags.make
tests/CMakeFiles/threads.dir/threads.c.o: ../tests/threads.c
tests/CMakeFiles/threads.dir/threads.c.o: tests/CMakeFiles/threads.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aaron/Desktop/workspace/glfw-3.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/threads.dir/threads.c.o"
	cd /home/aaron/Desktop/workspace/glfw-3.4/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT tests/CMakeFiles/threads.dir/threads.c.o -MF CMakeFiles/threads.dir/threads.c.o.d -o CMakeFiles/threads.dir/threads.c.o -c /home/aaron/Desktop/workspace/glfw-3.4/tests/threads.c

tests/CMakeFiles/threads.dir/threads.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/threads.dir/threads.c.i"
	cd /home/aaron/Desktop/workspace/glfw-3.4/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aaron/Desktop/workspace/glfw-3.4/tests/threads.c > CMakeFiles/threads.dir/threads.c.i

tests/CMakeFiles/threads.dir/threads.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/threads.dir/threads.c.s"
	cd /home/aaron/Desktop/workspace/glfw-3.4/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aaron/Desktop/workspace/glfw-3.4/tests/threads.c -o CMakeFiles/threads.dir/threads.c.s

tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.o: tests/CMakeFiles/threads.dir/flags.make
tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.o: ../deps/tinycthread.c
tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.o: tests/CMakeFiles/threads.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aaron/Desktop/workspace/glfw-3.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.o"
	cd /home/aaron/Desktop/workspace/glfw-3.4/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.o -MF CMakeFiles/threads.dir/__/deps/tinycthread.c.o.d -o CMakeFiles/threads.dir/__/deps/tinycthread.c.o -c /home/aaron/Desktop/workspace/glfw-3.4/deps/tinycthread.c

tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/threads.dir/__/deps/tinycthread.c.i"
	cd /home/aaron/Desktop/workspace/glfw-3.4/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aaron/Desktop/workspace/glfw-3.4/deps/tinycthread.c > CMakeFiles/threads.dir/__/deps/tinycthread.c.i

tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/threads.dir/__/deps/tinycthread.c.s"
	cd /home/aaron/Desktop/workspace/glfw-3.4/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aaron/Desktop/workspace/glfw-3.4/deps/tinycthread.c -o CMakeFiles/threads.dir/__/deps/tinycthread.c.s

# Object files for target threads
threads_OBJECTS = \
"CMakeFiles/threads.dir/threads.c.o" \
"CMakeFiles/threads.dir/__/deps/tinycthread.c.o"

# External object files for target threads
threads_EXTERNAL_OBJECTS =

tests/threads: tests/CMakeFiles/threads.dir/threads.c.o
tests/threads: tests/CMakeFiles/threads.dir/__/deps/tinycthread.c.o
tests/threads: tests/CMakeFiles/threads.dir/build.make
tests/threads: src/libglfw3.a
tests/threads: /usr/lib/x86_64-linux-gnu/libm.so
tests/threads: /usr/lib/x86_64-linux-gnu/librt.a
tests/threads: tests/CMakeFiles/threads.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aaron/Desktop/workspace/glfw-3.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable threads"
	cd /home/aaron/Desktop/workspace/glfw-3.4/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/threads.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/threads.dir/build: tests/threads
.PHONY : tests/CMakeFiles/threads.dir/build

tests/CMakeFiles/threads.dir/clean:
	cd /home/aaron/Desktop/workspace/glfw-3.4/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/threads.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/threads.dir/clean

tests/CMakeFiles/threads.dir/depend:
	cd /home/aaron/Desktop/workspace/glfw-3.4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron/Desktop/workspace/glfw-3.4 /home/aaron/Desktop/workspace/glfw-3.4/tests /home/aaron/Desktop/workspace/glfw-3.4/build /home/aaron/Desktop/workspace/glfw-3.4/build/tests /home/aaron/Desktop/workspace/glfw-3.4/build/tests/CMakeFiles/threads.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/threads.dir/depend

