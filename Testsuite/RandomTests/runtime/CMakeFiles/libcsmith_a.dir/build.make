# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/wangyang/csmith

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wangyang/csmith

# Include any dependencies generated for this target.
include runtime/CMakeFiles/libcsmith_a.dir/depend.make

# Include the progress variables for this target.
include runtime/CMakeFiles/libcsmith_a.dir/progress.make

# Include the compile flags for this target's objects.
include runtime/CMakeFiles/libcsmith_a.dir/flags.make

runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o: runtime/CMakeFiles/libcsmith_a.dir/flags.make
runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o: runtime/volatile_runtime.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wangyang/csmith/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o"
	cd /home/wangyang/csmith/runtime && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o   -c /home/wangyang/csmith/runtime/volatile_runtime.c

runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libcsmith_a.dir/volatile_runtime.c.i"
	cd /home/wangyang/csmith/runtime && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/wangyang/csmith/runtime/volatile_runtime.c > CMakeFiles/libcsmith_a.dir/volatile_runtime.c.i

runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libcsmith_a.dir/volatile_runtime.c.s"
	cd /home/wangyang/csmith/runtime && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/wangyang/csmith/runtime/volatile_runtime.c -o CMakeFiles/libcsmith_a.dir/volatile_runtime.c.s

runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o.requires:

.PHONY : runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o.requires

runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o.provides: runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o.requires
	$(MAKE) -f runtime/CMakeFiles/libcsmith_a.dir/build.make runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o.provides.build
.PHONY : runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o.provides

runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o.provides.build: runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o


# Object files for target libcsmith_a
libcsmith_a_OBJECTS = \
"CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o"

# External object files for target libcsmith_a
libcsmith_a_EXTERNAL_OBJECTS =

runtime/libcsmith.a: runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o
runtime/libcsmith.a: runtime/CMakeFiles/libcsmith_a.dir/build.make
runtime/libcsmith.a: runtime/CMakeFiles/libcsmith_a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wangyang/csmith/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libcsmith.a"
	cd /home/wangyang/csmith/runtime && $(CMAKE_COMMAND) -P CMakeFiles/libcsmith_a.dir/cmake_clean_target.cmake
	cd /home/wangyang/csmith/runtime && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libcsmith_a.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
runtime/CMakeFiles/libcsmith_a.dir/build: runtime/libcsmith.a

.PHONY : runtime/CMakeFiles/libcsmith_a.dir/build

runtime/CMakeFiles/libcsmith_a.dir/requires: runtime/CMakeFiles/libcsmith_a.dir/volatile_runtime.c.o.requires

.PHONY : runtime/CMakeFiles/libcsmith_a.dir/requires

runtime/CMakeFiles/libcsmith_a.dir/clean:
	cd /home/wangyang/csmith/runtime && $(CMAKE_COMMAND) -P CMakeFiles/libcsmith_a.dir/cmake_clean.cmake
.PHONY : runtime/CMakeFiles/libcsmith_a.dir/clean

runtime/CMakeFiles/libcsmith_a.dir/depend:
	cd /home/wangyang/csmith && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wangyang/csmith /home/wangyang/csmith/runtime /home/wangyang/csmith /home/wangyang/csmith/runtime /home/wangyang/csmith/runtime/CMakeFiles/libcsmith_a.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : runtime/CMakeFiles/libcsmith_a.dir/depend
