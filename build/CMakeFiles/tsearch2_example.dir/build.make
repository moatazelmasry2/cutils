# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elmasry/workspace2/cutils

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elmasry/workspace2/cutils/build

# Include any dependencies generated for this target.
include CMakeFiles/tsearch2_example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tsearch2_example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tsearch2_example.dir/flags.make

CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o: CMakeFiles/tsearch2_example.dir/flags.make
CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o: ../examples/tsearch2_demo.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/elmasry/workspace2/cutils/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o   -c /home/elmasry/workspace2/cutils/examples/tsearch2_demo.c

CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.i"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/elmasry/workspace2/cutils/examples/tsearch2_demo.c > CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.i

CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.s"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/elmasry/workspace2/cutils/examples/tsearch2_demo.c -o CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.s

CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o.requires:
.PHONY : CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o.requires

CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o.provides: CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o.requires
	$(MAKE) -f CMakeFiles/tsearch2_example.dir/build.make CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o.provides.build
.PHONY : CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o.provides

CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o.provides.build: CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o

# Object files for target tsearch2_example
tsearch2_example_OBJECTS = \
"CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o"

# External object files for target tsearch2_example
tsearch2_example_EXTERNAL_OBJECTS =

tsearch2_example: CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o
tsearch2_example: libcutils.a
tsearch2_example: CMakeFiles/tsearch2_example.dir/build.make
tsearch2_example: CMakeFiles/tsearch2_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable tsearch2_example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tsearch2_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tsearch2_example.dir/build: tsearch2_example
.PHONY : CMakeFiles/tsearch2_example.dir/build

CMakeFiles/tsearch2_example.dir/requires: CMakeFiles/tsearch2_example.dir/examples/tsearch2_demo.c.o.requires
.PHONY : CMakeFiles/tsearch2_example.dir/requires

CMakeFiles/tsearch2_example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tsearch2_example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tsearch2_example.dir/clean

CMakeFiles/tsearch2_example.dir/depend:
	cd /home/elmasry/workspace2/cutils/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elmasry/workspace2/cutils /home/elmasry/workspace2/cutils /home/elmasry/workspace2/cutils/build /home/elmasry/workspace2/cutils/build /home/elmasry/workspace2/cutils/build/CMakeFiles/tsearch2_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tsearch2_example.dir/depend

