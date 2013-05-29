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
include plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/depend.make

# Include the progress variables for this target.
include plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/flags.make

plugins/lexers/cpp/moc_lexer_cpp.cxx: ../plugins/lexers/cpp/lexer_cpp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /build/kiss-script/kiss/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_lexer_cpp.cxx"
	cd /build/kiss-script/kiss/build/plugins/lexers/cpp && /usr/lib/x86_64-linux-gnu/qt4/bin/moc -I/build/kiss-script/kiss -I/build/kiss-script/kiss/src -I/build/kiss-script/kiss -I/build/kiss-script/kiss/build -I/build/kiss-script/kiss/include -I/build/kiss-script/kiss/include/dialogs -I/build/kiss-script/kiss/include/lexer -I/build/kiss-script/kiss/include/widgets -I/build/kiss-script/kiss/include/menus -I/build/kiss-script/kiss/include/js -I/build/kiss-script/kiss/include/project -I/build/kiss-script/kiss/include/compiler -I/build/kiss-script/kiss/include/interface -I/usr/include/qt4 -I/usr/include/qt4/QtDeclarative -I/usr/include/qt4/QtScript -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtCore -I/build/kiss-script/kiss/build/plugins/lexers/cpp -I/usr/include/qt4 -I/build/kiss-script/kiss/include -I/build/kiss-script/kiss/include/dialogs -I/build/kiss-script/kiss/include/lexer -I/build/kiss-script/kiss/include/widgets -I/build/kiss-script/kiss/include/menus -I/build/kiss-script/kiss/include/js -I/build/kiss-script/kiss/include/project -I/build/kiss-script/kiss/include/compiler -I/build/kiss-script/kiss/include/interface -I/usr/include/qt4 -I/usr/include/qt4/QtDeclarative -I/usr/include/qt4/QtScript -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtCore -DQT_NO_DEBUG -DQT_DECLARATIVE_LIB -DQT_SCRIPT_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_NO_DEBUG -DQT_DECLARATIVE_LIB -DQT_SCRIPT_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -o /build/kiss-script/kiss/build/plugins/lexers/cpp/moc_lexer_cpp.cxx /build/kiss-script/kiss/plugins/lexers/cpp/lexer_cpp.hpp

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/flags.make
plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o: ../plugins/lexers/cpp/lexer_cpp.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /build/kiss-script/kiss/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o"
	cd /build/kiss-script/kiss/build/plugins/lexers/cpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o -c /build/kiss-script/kiss/plugins/lexers/cpp/lexer_cpp.cpp

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.i"
	cd /build/kiss-script/kiss/build/plugins/lexers/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /build/kiss-script/kiss/plugins/lexers/cpp/lexer_cpp.cpp > CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.i

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.s"
	cd /build/kiss-script/kiss/build/plugins/lexers/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /build/kiss-script/kiss/plugins/lexers/cpp/lexer_cpp.cpp -o CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.s

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o.requires:
.PHONY : plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o.requires

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o.provides: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o.requires
	$(MAKE) -f plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/build.make plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o.provides.build
.PHONY : plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o.provides

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o.provides.build: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/flags.make
plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o: plugins/lexers/cpp/moc_lexer_cpp.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /build/kiss-script/kiss/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o"
	cd /build/kiss-script/kiss/build/plugins/lexers/cpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o -c /build/kiss-script/kiss/build/plugins/lexers/cpp/moc_lexer_cpp.cxx

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.i"
	cd /build/kiss-script/kiss/build/plugins/lexers/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /build/kiss-script/kiss/build/plugins/lexers/cpp/moc_lexer_cpp.cxx > CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.i

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.s"
	cd /build/kiss-script/kiss/build/plugins/lexers/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /build/kiss-script/kiss/build/plugins/lexers/cpp/moc_lexer_cpp.cxx -o CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.s

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o.requires:
.PHONY : plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o.requires

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o.provides: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o.requires
	$(MAKE) -f plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/build.make plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o.provides.build
.PHONY : plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o.provides

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o.provides.build: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o

# Object files for target cpp_lexer
cpp_lexer_OBJECTS = \
"CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o" \
"CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o"

# External object files for target cpp_lexer
cpp_lexer_EXTERNAL_OBJECTS =

../lib/libcpp_lexer.so: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o
../lib/libcpp_lexer.so: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o
../lib/libcpp_lexer.so: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/build.make
../lib/libcpp_lexer.so: ../lib/libkisside.a
../lib/libcpp_lexer.so: /usr/lib/x86_64-linux-gnu/libQtDeclarative.so
../lib/libcpp_lexer.so: /usr/lib/x86_64-linux-gnu/libQtScript.so
../lib/libcpp_lexer.so: /usr/lib/x86_64-linux-gnu/libQtSvg.so
../lib/libcpp_lexer.so: /usr/lib/x86_64-linux-gnu/libQtXmlPatterns.so
../lib/libcpp_lexer.so: /usr/lib/x86_64-linux-gnu/libQtGui.so
../lib/libcpp_lexer.so: /usr/lib/x86_64-linux-gnu/libQtXml.so
../lib/libcpp_lexer.so: /usr/lib/x86_64-linux-gnu/libQtSql.so
../lib/libcpp_lexer.so: /usr/lib/x86_64-linux-gnu/libQtNetwork.so
../lib/libcpp_lexer.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
../lib/libcpp_lexer.so: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../../../lib/libcpp_lexer.so"
	cd /build/kiss-script/kiss/build/plugins/lexers/cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp_lexer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/build: ../lib/libcpp_lexer.so
.PHONY : plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/build

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/requires: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/lexer_cpp.cpp.o.requires
plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/requires: plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/moc_lexer_cpp.cxx.o.requires
.PHONY : plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/requires

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/clean:
	cd /build/kiss-script/kiss/build/plugins/lexers/cpp && $(CMAKE_COMMAND) -P CMakeFiles/cpp_lexer.dir/cmake_clean.cmake
.PHONY : plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/clean

plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/depend: plugins/lexers/cpp/moc_lexer_cpp.cxx
	cd /build/kiss-script/kiss/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /build/kiss-script/kiss /build/kiss-script/kiss/plugins/lexers/cpp /build/kiss-script/kiss/build /build/kiss-script/kiss/build/plugins/lexers/cpp /build/kiss-script/kiss/build/plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/lexers/cpp/CMakeFiles/cpp_lexer.dir/depend

