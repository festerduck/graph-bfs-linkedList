# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fester/cpp/graph-bfs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fester/cpp/graph-bfs/build

# Include any dependencies generated for this target.
include CMakeFiles/AVL.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/AVL.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/AVL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AVL.dir/flags.make

CMakeFiles/AVL.dir/listMain.cpp.o: CMakeFiles/AVL.dir/flags.make
CMakeFiles/AVL.dir/listMain.cpp.o: ../listMain.cpp
CMakeFiles/AVL.dir/listMain.cpp.o: CMakeFiles/AVL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fester/cpp/graph-bfs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AVL.dir/listMain.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AVL.dir/listMain.cpp.o -MF CMakeFiles/AVL.dir/listMain.cpp.o.d -o CMakeFiles/AVL.dir/listMain.cpp.o -c /home/fester/cpp/graph-bfs/listMain.cpp

CMakeFiles/AVL.dir/listMain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AVL.dir/listMain.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fester/cpp/graph-bfs/listMain.cpp > CMakeFiles/AVL.dir/listMain.cpp.i

CMakeFiles/AVL.dir/listMain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AVL.dir/listMain.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fester/cpp/graph-bfs/listMain.cpp -o CMakeFiles/AVL.dir/listMain.cpp.s

CMakeFiles/AVL.dir/src/List.cpp.o: CMakeFiles/AVL.dir/flags.make
CMakeFiles/AVL.dir/src/List.cpp.o: ../src/List.cpp
CMakeFiles/AVL.dir/src/List.cpp.o: CMakeFiles/AVL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fester/cpp/graph-bfs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AVL.dir/src/List.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AVL.dir/src/List.cpp.o -MF CMakeFiles/AVL.dir/src/List.cpp.o.d -o CMakeFiles/AVL.dir/src/List.cpp.o -c /home/fester/cpp/graph-bfs/src/List.cpp

CMakeFiles/AVL.dir/src/List.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AVL.dir/src/List.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fester/cpp/graph-bfs/src/List.cpp > CMakeFiles/AVL.dir/src/List.cpp.i

CMakeFiles/AVL.dir/src/List.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AVL.dir/src/List.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fester/cpp/graph-bfs/src/List.cpp -o CMakeFiles/AVL.dir/src/List.cpp.s

# Object files for target AVL
AVL_OBJECTS = \
"CMakeFiles/AVL.dir/listMain.cpp.o" \
"CMakeFiles/AVL.dir/src/List.cpp.o"

# External object files for target AVL
AVL_EXTERNAL_OBJECTS =

AVL: CMakeFiles/AVL.dir/listMain.cpp.o
AVL: CMakeFiles/AVL.dir/src/List.cpp.o
AVL: CMakeFiles/AVL.dir/build.make
AVL: CMakeFiles/AVL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fester/cpp/graph-bfs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable AVL"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AVL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AVL.dir/build: AVL
.PHONY : CMakeFiles/AVL.dir/build

CMakeFiles/AVL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AVL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AVL.dir/clean

CMakeFiles/AVL.dir/depend:
	cd /home/fester/cpp/graph-bfs/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fester/cpp/graph-bfs /home/fester/cpp/graph-bfs /home/fester/cpp/graph-bfs/build /home/fester/cpp/graph-bfs/build /home/fester/cpp/graph-bfs/build/CMakeFiles/AVL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AVL.dir/depend

