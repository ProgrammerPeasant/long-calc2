# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/x64/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/antonbirka/Documents/long-calc2/long-calc2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug

# Include any dependencies generated for this target.
include Google_tests/lib/googletest/CMakeFiles/gtest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Google_tests/lib/googletest/CMakeFiles/gtest.dir/compiler_depend.make

# Include the progress variables for this target.
include Google_tests/lib/googletest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include Google_tests/lib/googletest/CMakeFiles/gtest.dir/flags.make

Google_tests/lib/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: Google_tests/lib/googletest/CMakeFiles/gtest.dir/flags.make
Google_tests/lib/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: /Users/antonbirka/Documents/long-calc2/long-calc2/Google_tests/lib/googletest/src/gtest-all.cc
Google_tests/lib/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: Google_tests/lib/googletest/CMakeFiles/gtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Google_tests/lib/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o"
	cd /Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug/Google_tests/lib/googletest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Google_tests/lib/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o -MF CMakeFiles/gtest.dir/src/gtest-all.cc.o.d -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c /Users/antonbirka/Documents/long-calc2/long-calc2/Google_tests/lib/googletest/src/gtest-all.cc

Google_tests/lib/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd /Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug/Google_tests/lib/googletest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/antonbirka/Documents/long-calc2/long-calc2/Google_tests/lib/googletest/src/gtest-all.cc > CMakeFiles/gtest.dir/src/gtest-all.cc.i

Google_tests/lib/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd /Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug/Google_tests/lib/googletest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/antonbirka/Documents/long-calc2/long-calc2/Google_tests/lib/googletest/src/gtest-all.cc -o CMakeFiles/gtest.dir/src/gtest-all.cc.s

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

lib/libgtest.a: Google_tests/lib/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
lib/libgtest.a: Google_tests/lib/googletest/CMakeFiles/gtest.dir/build.make
lib/libgtest.a: Google_tests/lib/googletest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/libgtest.a"
	cd /Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug/Google_tests/lib/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	cd /Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug/Google_tests/lib/googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Google_tests/lib/googletest/CMakeFiles/gtest.dir/build: lib/libgtest.a
.PHONY : Google_tests/lib/googletest/CMakeFiles/gtest.dir/build

Google_tests/lib/googletest/CMakeFiles/gtest.dir/clean:
	cd /Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug/Google_tests/lib/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : Google_tests/lib/googletest/CMakeFiles/gtest.dir/clean

Google_tests/lib/googletest/CMakeFiles/gtest.dir/depend:
	cd /Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/antonbirka/Documents/long-calc2/long-calc2 /Users/antonbirka/Documents/long-calc2/long-calc2/Google_tests/lib/googletest /Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug /Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug/Google_tests/lib/googletest /Users/antonbirka/Documents/long-calc2/long-calc2/cmake-build-debug/Google_tests/lib/googletest/CMakeFiles/gtest.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Google_tests/lib/googletest/CMakeFiles/gtest.dir/depend

