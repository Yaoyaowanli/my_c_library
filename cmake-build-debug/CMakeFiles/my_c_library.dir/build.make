# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yaoyuan/Code/C:Cpp_Code/my_c_library

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yaoyuan/Code/C:Cpp_Code/my_c_library/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/my_c_library.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/my_c_library.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/my_c_library.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_c_library.dir/flags.make

CMakeFiles/my_c_library.dir/my_string/my_string.cpp.o: CMakeFiles/my_c_library.dir/flags.make
CMakeFiles/my_c_library.dir/my_string/my_string.cpp.o: ../my_string/my_string.cpp
CMakeFiles/my_c_library.dir/my_string/my_string.cpp.o: CMakeFiles/my_c_library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yaoyuan/Code/C:Cpp_Code/my_c_library/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/my_c_library.dir/my_string/my_string.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/my_c_library.dir/my_string/my_string.cpp.o -MF CMakeFiles/my_c_library.dir/my_string/my_string.cpp.o.d -o CMakeFiles/my_c_library.dir/my_string/my_string.cpp.o -c /Users/yaoyuan/Code/C:Cpp_Code/my_c_library/my_string/my_string.cpp

CMakeFiles/my_c_library.dir/my_string/my_string.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_c_library.dir/my_string/my_string.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yaoyuan/Code/C:Cpp_Code/my_c_library/my_string/my_string.cpp > CMakeFiles/my_c_library.dir/my_string/my_string.cpp.i

CMakeFiles/my_c_library.dir/my_string/my_string.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_c_library.dir/my_string/my_string.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yaoyuan/Code/C:Cpp_Code/my_c_library/my_string/my_string.cpp -o CMakeFiles/my_c_library.dir/my_string/my_string.cpp.s

CMakeFiles/my_c_library.dir/main.cpp.o: CMakeFiles/my_c_library.dir/flags.make
CMakeFiles/my_c_library.dir/main.cpp.o: ../main.cpp
CMakeFiles/my_c_library.dir/main.cpp.o: CMakeFiles/my_c_library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yaoyuan/Code/C:Cpp_Code/my_c_library/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/my_c_library.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/my_c_library.dir/main.cpp.o -MF CMakeFiles/my_c_library.dir/main.cpp.o.d -o CMakeFiles/my_c_library.dir/main.cpp.o -c /Users/yaoyuan/Code/C:Cpp_Code/my_c_library/main.cpp

CMakeFiles/my_c_library.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_c_library.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yaoyuan/Code/C:Cpp_Code/my_c_library/main.cpp > CMakeFiles/my_c_library.dir/main.cpp.i

CMakeFiles/my_c_library.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_c_library.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yaoyuan/Code/C:Cpp_Code/my_c_library/main.cpp -o CMakeFiles/my_c_library.dir/main.cpp.s

# Object files for target my_c_library
my_c_library_OBJECTS = \
"CMakeFiles/my_c_library.dir/my_string/my_string.cpp.o" \
"CMakeFiles/my_c_library.dir/main.cpp.o"

# External object files for target my_c_library
my_c_library_EXTERNAL_OBJECTS =

my_c_library: CMakeFiles/my_c_library.dir/my_string/my_string.cpp.o
my_c_library: CMakeFiles/my_c_library.dir/main.cpp.o
my_c_library: CMakeFiles/my_c_library.dir/build.make
my_c_library: CMakeFiles/my_c_library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yaoyuan/Code/C:Cpp_Code/my_c_library/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable my_c_library"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_c_library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_c_library.dir/build: my_c_library
.PHONY : CMakeFiles/my_c_library.dir/build

CMakeFiles/my_c_library.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_c_library.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_c_library.dir/clean

CMakeFiles/my_c_library.dir/depend:
	cd /Users/yaoyuan/Code/C:Cpp_Code/my_c_library/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yaoyuan/Code/C:Cpp_Code/my_c_library /Users/yaoyuan/Code/C:Cpp_Code/my_c_library /Users/yaoyuan/Code/C:Cpp_Code/my_c_library/cmake-build-debug /Users/yaoyuan/Code/C:Cpp_Code/my_c_library/cmake-build-debug /Users/yaoyuan/Code/C:Cpp_Code/my_c_library/cmake-build-debug/CMakeFiles/my_c_library.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_c_library.dir/depend

