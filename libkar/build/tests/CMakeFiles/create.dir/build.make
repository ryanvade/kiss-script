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
CMAKE_SOURCE_DIR = /build/kiss-script/libkar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /build/kiss-script/libkar/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/create.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/create.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/create.dir/flags.make

tests/CMakeFiles/create.dir/create.cpp.o: tests/CMakeFiles/create.dir/flags.make
tests/CMakeFiles/create.dir/create.cpp.o: ../tests/create.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /build/kiss-script/libkar/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/create.dir/create.cpp.o"
	cd /build/kiss-script/libkar/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/create.dir/create.cpp.o -c /build/kiss-script/libkar/tests/create.cpp

tests/CMakeFiles/create.dir/create.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/create.dir/create.cpp.i"
	cd /build/kiss-script/libkar/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /build/kiss-script/libkar/tests/create.cpp > CMakeFiles/create.dir/create.cpp.i

tests/CMakeFiles/create.dir/create.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/create.dir/create.cpp.s"
	cd /build/kiss-script/libkar/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /build/kiss-script/libkar/tests/create.cpp -o CMakeFiles/create.dir/create.cpp.s

tests/CMakeFiles/create.dir/create.cpp.o.requires:
.PHONY : tests/CMakeFiles/create.dir/create.cpp.o.requires

tests/CMakeFiles/create.dir/create.cpp.o.provides: tests/CMakeFiles/create.dir/create.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/create.dir/build.make tests/CMakeFiles/create.dir/create.cpp.o.provides.build
.PHONY : tests/CMakeFiles/create.dir/create.cpp.o.provides

tests/CMakeFiles/create.dir/create.cpp.o.provides.build: tests/CMakeFiles/create.dir/create.cpp.o

# Object files for target create
create_OBJECTS = \
"CMakeFiles/create.dir/create.cpp.o"

# External object files for target create
create_EXTERNAL_OBJECTS =

tests/create: tests/CMakeFiles/create.dir/create.cpp.o
tests/create: tests/CMakeFiles/create.dir/build.make
tests/create: /usr/lib/x86_64-linux-gnu/libQtCore.so
tests/create: ../lib/libkar.so
tests/create: /usr/lib/x86_64-linux-gnu/libQtCore.so
tests/create: tests/CMakeFiles/create.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable create"
	cd /build/kiss-script/libkar/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/create.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/create.dir/build: tests/create
.PHONY : tests/CMakeFiles/create.dir/build

tests/CMakeFiles/create.dir/requires: tests/CMakeFiles/create.dir/create.cpp.o.requires
.PHONY : tests/CMakeFiles/create.dir/requires

tests/CMakeFiles/create.dir/clean:
	cd /build/kiss-script/libkar/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/create.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/create.dir/clean

tests/CMakeFiles/create.dir/depend:
	cd /build/kiss-script/libkar/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /build/kiss-script/libkar /build/kiss-script/libkar/tests /build/kiss-script/libkar/build /build/kiss-script/libkar/build/tests /build/kiss-script/libkar/build/tests/CMakeFiles/create.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/create.dir/depend

