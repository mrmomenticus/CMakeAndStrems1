# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/moment/CLionProjects/CmakeAndStrems

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/moment/CLionProjects/CmakeAndStrems/build

# Include any dependencies generated for this target.
include CMakeFiles/CmakeAndStrems.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CmakeAndStrems.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CmakeAndStrems.dir/flags.make

CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.o: CMakeFiles/CmakeAndStrems.dir/flags.make
CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.o: ../OneStream.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/moment/CLionProjects/CmakeAndStrems/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.o -c /home/moment/CLionProjects/CmakeAndStrems/OneStream.cpp

CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/moment/CLionProjects/CmakeAndStrems/OneStream.cpp > CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.i

CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/moment/CLionProjects/CmakeAndStrems/OneStream.cpp -o CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.s

CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.o: CMakeFiles/CmakeAndStrems.dir/flags.make
CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.o: ../TestProg1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/moment/CLionProjects/CmakeAndStrems/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.o -c /home/moment/CLionProjects/CmakeAndStrems/TestProg1.cpp

CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/moment/CLionProjects/CmakeAndStrems/TestProg1.cpp > CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.i

CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/moment/CLionProjects/CmakeAndStrems/TestProg1.cpp -o CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.s

CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.o: CMakeFiles/CmakeAndStrems.dir/flags.make
CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.o: ../TwoStream.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/moment/CLionProjects/CmakeAndStrems/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.o -c /home/moment/CLionProjects/CmakeAndStrems/TwoStream.cpp

CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/moment/CLionProjects/CmakeAndStrems/TwoStream.cpp > CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.i

CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/moment/CLionProjects/CmakeAndStrems/TwoStream.cpp -o CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.s

# Object files for target CmakeAndStrems
CmakeAndStrems_OBJECTS = \
"CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.o" \
"CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.o" \
"CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.o"

# External object files for target CmakeAndStrems
CmakeAndStrems_EXTERNAL_OBJECTS =

CmakeAndStrems: CMakeFiles/CmakeAndStrems.dir/OneStream.cpp.o
CmakeAndStrems: CMakeFiles/CmakeAndStrems.dir/TestProg1.cpp.o
CmakeAndStrems: CMakeFiles/CmakeAndStrems.dir/TwoStream.cpp.o
CmakeAndStrems: CMakeFiles/CmakeAndStrems.dir/build.make
CmakeAndStrems: CMakeFiles/CmakeAndStrems.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/moment/CLionProjects/CmakeAndStrems/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable CmakeAndStrems"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CmakeAndStrems.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CmakeAndStrems.dir/build: CmakeAndStrems

.PHONY : CMakeFiles/CmakeAndStrems.dir/build

CMakeFiles/CmakeAndStrems.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CmakeAndStrems.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CmakeAndStrems.dir/clean

CMakeFiles/CmakeAndStrems.dir/depend:
	cd /home/moment/CLionProjects/CmakeAndStrems/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/moment/CLionProjects/CmakeAndStrems /home/moment/CLionProjects/CmakeAndStrems /home/moment/CLionProjects/CmakeAndStrems/build /home/moment/CLionProjects/CmakeAndStrems/build /home/moment/CLionProjects/CmakeAndStrems/build/CMakeFiles/CmakeAndStrems.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CmakeAndStrems.dir/depend
