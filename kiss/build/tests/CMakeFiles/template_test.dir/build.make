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
CMAKE_SOURCE_DIR = /build/kiss-script/kiss

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /build/kiss-script/kiss/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/template_test.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/template_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/template_test.dir/flags.make

tests/CMakeFiles/template_test.dir/template_test.cpp.o: tests/CMakeFiles/template_test.dir/flags.make
tests/CMakeFiles/template_test.dir/template_test.cpp.o: ../tests/template_test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /build/kiss-script/kiss/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/template_test.dir/template_test.cpp.o"
	cd /build/kiss-script/kiss/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/template_test.dir/template_test.cpp.o -c /build/kiss-script/kiss/tests/template_test.cpp

tests/CMakeFiles/template_test.dir/template_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/template_test.dir/template_test.cpp.i"
	cd /build/kiss-script/kiss/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /build/kiss-script/kiss/tests/template_test.cpp > CMakeFiles/template_test.dir/template_test.cpp.i

tests/CMakeFiles/template_test.dir/template_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/template_test.dir/template_test.cpp.s"
	cd /build/kiss-script/kiss/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /build/kiss-script/kiss/tests/template_test.cpp -o CMakeFiles/template_test.dir/template_test.cpp.s

tests/CMakeFiles/template_test.dir/template_test.cpp.o.requires:
.PHONY : tests/CMakeFiles/template_test.dir/template_test.cpp.o.requires

tests/CMakeFiles/template_test.dir/template_test.cpp.o.provides: tests/CMakeFiles/template_test.dir/template_test.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/template_test.dir/build.make tests/CMakeFiles/template_test.dir/template_test.cpp.o.provides.build
.PHONY : tests/CMakeFiles/template_test.dir/template_test.cpp.o.provides

tests/CMakeFiles/template_test.dir/template_test.cpp.o.provides.build: tests/CMakeFiles/template_test.dir/template_test.cpp.o

# Object files for target template_test
template_test_OBJECTS = \
"CMakeFiles/template_test.dir/template_test.cpp.o"

# External object files for target template_test
template_test_EXTERNAL_OBJECTS =

../deploy/template_test: tests/CMakeFiles/template_test.dir/template_test.cpp.o
../deploy/template_test: tests/CMakeFiles/template_test.dir/build.make
../deploy/template_test: ../lib/libkisside.a
../deploy/template_test: /usr/lib/x86_64-linux-gnu/libQtDeclarative.so
../deploy/template_test: /usr/lib/x86_64-linux-gnu/libQtScript.so
../deploy/template_test: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../deploy/template_test: /usr/lib/x86_64-linux-gnu/libQtXmlPatterns.so
../deploy/template_test: /usr/lib/x86_64-linux-gnu/libQtGui.so
../deploy/template_test: /usr/lib/x86_64-linux-gnu/libQtXml.so
../deploy/template_test: /usr/lib/x86_64-linux-gnu/libQtSql.so
../deploy/template_test: /usr/lib/x86_64-linux-gnu/libQtNetwork.so
../deploy/template_test: /usr/lib/x86_64-linux-gnu/libQtCore.so
../deploy/template_test: tests/CMakeFiles/template_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../deploy/template_test"
	cd /build/kiss-script/kiss/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/template_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/template_test.dir/build: ../deploy/template_test
.PHONY : tests/CMakeFiles/template_test.dir/build

tests/CMakeFiles/template_test.dir/requires: tests/CMakeFiles/template_test.dir/template_test.cpp.o.requires
.PHONY : tests/CMakeFiles/template_test.dir/requires

tests/CMakeFiles/template_test.dir/clean:
	cd /build/kiss-script/kiss/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/template_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/template_test.dir/clean

tests/CMakeFiles/template_test.dir/depend:
	cd /build/kiss-script/kiss/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /build/kiss-script/kiss /build/kiss-script/kiss/tests /build/kiss-script/kiss/build /build/kiss-script/kiss/build/tests /build/kiss-script/kiss/build/tests/CMakeFiles/template_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/template_test.dir/depend

