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

# Utility rule file for copy_platform.hints.

# Include the progress variables for this target.
include CMakeFiles/copy_platform.hints.dir/progress.make

CMakeFiles/copy_platform.hints:
	$(CMAKE_COMMAND) -E cmake_progress_report /build/kiss-script/ks2/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Copying files: /build/kiss-script/ks2/rc/platform.hints"

copy_platform.hints: CMakeFiles/copy_platform.hints
copy_platform.hints: CMakeFiles/copy_platform.hints.dir/build.make
	/usr/bin/cmake -E copy /build/kiss-script/ks2/rc/platform.hints /build/kiss-script/ks2/deploy/platform.hints
.PHONY : copy_platform.hints

# Rule to build all files generated by this target.
CMakeFiles/copy_platform.hints.dir/build: copy_platform.hints
.PHONY : CMakeFiles/copy_platform.hints.dir/build

CMakeFiles/copy_platform.hints.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/copy_platform.hints.dir/cmake_clean.cmake
.PHONY : CMakeFiles/copy_platform.hints.dir/clean

CMakeFiles/copy_platform.hints.dir/depend:
	cd /build/kiss-script/ks2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /build/kiss-script/ks2 /build/kiss-script/ks2 /build/kiss-script/ks2/build /build/kiss-script/ks2/build /build/kiss-script/ks2/build/CMakeFiles/copy_platform.hints.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/copy_platform.hints.dir/depend

