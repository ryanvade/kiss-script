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
CMAKE_SOURCE_DIR = /build/kiss-script/ks2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /build/kiss-script/ks2/build

# Utility rule file for copy_target.

# Include the progress variables for this target.
include CMakeFiles/copy_target.dir/progress.make

CMakeFiles/copy_target:
	$(CMAKE_COMMAND) -E cmake_progress_report /build/kiss-script/ks2/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Copying files: /build/kiss-script/ks2/rc/target.h"

copy_target: CMakeFiles/copy_target
copy_target: CMakeFiles/copy_target.dir/build.make
	/usr/bin/cmake -E copy /build/kiss-script/ks2/rc/target.h /build/kiss-script/ks2/deploy/prefix/usr/include/target.h
.PHONY : copy_target

# Rule to build all files generated by this target.
CMakeFiles/copy_target.dir/build: copy_target
.PHONY : CMakeFiles/copy_target.dir/build

CMakeFiles/copy_target.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/copy_target.dir/cmake_clean.cmake
.PHONY : CMakeFiles/copy_target.dir/clean

CMakeFiles/copy_target.dir/depend:
	cd /build/kiss-script/ks2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /build/kiss-script/ks2 /build/kiss-script/ks2 /build/kiss-script/ks2/build /build/kiss-script/ks2/build /build/kiss-script/ks2/build/CMakeFiles/copy_target.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/copy_target.dir/depend

