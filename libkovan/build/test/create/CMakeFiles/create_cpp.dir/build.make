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

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /build/kiss-script/libkovan

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /build/kiss-script/libkovan/build

# Include any dependencies generated for this target.
include test/create/CMakeFiles/create_cpp.dir/depend.make

# Include the progress variables for this target.
include test/create/CMakeFiles/create_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include test/create/CMakeFiles/create_cpp.dir/flags.make

test/create/CMakeFiles/create_cpp.dir/create.cpp.o: test/create/CMakeFiles/create_cpp.dir/flags.make
test/create/CMakeFiles/create_cpp.dir/create.cpp.o: ../test/create/create.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /build/kiss-script/libkovan/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/create/CMakeFiles/create_cpp.dir/create.cpp.o"
	cd /build/kiss-script/libkovan/build/test/create && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/create_cpp.dir/create.cpp.o -c /build/kiss-script/libkovan/test/create/create.cpp

test/create/CMakeFiles/create_cpp.dir/create.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/create_cpp.dir/create.cpp.i"
	cd /build/kiss-script/libkovan/build/test/create && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /build/kiss-script/libkovan/test/create/create.cpp > CMakeFiles/create_cpp.dir/create.cpp.i

test/create/CMakeFiles/create_cpp.dir/create.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/create_cpp.dir/create.cpp.s"
	cd /build/kiss-script/libkovan/build/test/create && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /build/kiss-script/libkovan/test/create/create.cpp -o CMakeFiles/create_cpp.dir/create.cpp.s

test/create/CMakeFiles/create_cpp.dir/create.cpp.o.requires:
.PHONY : test/create/CMakeFiles/create_cpp.dir/create.cpp.o.requires

test/create/CMakeFiles/create_cpp.dir/create.cpp.o.provides: test/create/CMakeFiles/create_cpp.dir/create.cpp.o.requires
	$(MAKE) -f test/create/CMakeFiles/create_cpp.dir/build.make test/create/CMakeFiles/create_cpp.dir/create.cpp.o.provides.build
.PHONY : test/create/CMakeFiles/create_cpp.dir/create.cpp.o.provides

test/create/CMakeFiles/create_cpp.dir/create.cpp.o.provides.build: test/create/CMakeFiles/create_cpp.dir/create.cpp.o

# Object files for target create_cpp
create_cpp_OBJECTS = \
"CMakeFiles/create_cpp.dir/create.cpp.o"

# External object files for target create_cpp
create_cpp_EXTERNAL_OBJECTS =

test/create/create_cpp: test/create/CMakeFiles/create_cpp.dir/create.cpp.o
test/create/create_cpp: test/create/CMakeFiles/create_cpp.dir/build.make
test/create/create_cpp: ../lib/libkovan.so
test/create/create_cpp: test/create/CMakeFiles/create_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable create_cpp"
	cd /build/kiss-script/libkovan/build/test/create && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/create_cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/create/CMakeFiles/create_cpp.dir/build: test/create/create_cpp
.PHONY : test/create/CMakeFiles/create_cpp.dir/build

test/create/CMakeFiles/create_cpp.dir/requires: test/create/CMakeFiles/create_cpp.dir/create.cpp.o.requires
.PHONY : test/create/CMakeFiles/create_cpp.dir/requires

test/create/CMakeFiles/create_cpp.dir/clean:
	cd /build/kiss-script/libkovan/build/test/create && $(CMAKE_COMMAND) -P CMakeFiles/create_cpp.dir/cmake_clean.cmake
.PHONY : test/create/CMakeFiles/create_cpp.dir/clean

test/create/CMakeFiles/create_cpp.dir/depend:
	cd /build/kiss-script/libkovan/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /build/kiss-script/libkovan /build/kiss-script/libkovan/test/create /build/kiss-script/libkovan/build /build/kiss-script/libkovan/build/test/create /build/kiss-script/libkovan/build/test/create/CMakeFiles/create_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/create/CMakeFiles/create_cpp.dir/depend

