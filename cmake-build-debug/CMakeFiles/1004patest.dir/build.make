# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Programmer\Clion\Clion_files\CLion 2020.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programmer\Clion\Clion_files\CLion 2020.2.5\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1004patest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1004patest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1004patest.dir/flags.make

CMakeFiles/1004patest.dir/1004patest.cpp.obj: CMakeFiles/1004patest.dir/flags.make
CMakeFiles/1004patest.dir/1004patest.cpp.obj: ../1004patest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1004patest.dir/1004patest.cpp.obj"
	D:\Programmer\Rust\Msys2\msys2_files\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1004patest.dir\1004patest.cpp.obj -c D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog\1004patest.cpp

CMakeFiles/1004patest.dir/1004patest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1004patest.dir/1004patest.cpp.i"
	D:\Programmer\Rust\Msys2\msys2_files\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog\1004patest.cpp > CMakeFiles\1004patest.dir\1004patest.cpp.i

CMakeFiles/1004patest.dir/1004patest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1004patest.dir/1004patest.cpp.s"
	D:\Programmer\Rust\Msys2\msys2_files\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog\1004patest.cpp -o CMakeFiles\1004patest.dir\1004patest.cpp.s

# Object files for target 1004patest
1004patest_OBJECTS = \
"CMakeFiles/1004patest.dir/1004patest.cpp.obj"

# External object files for target 1004patest
1004patest_EXTERNAL_OBJECTS =

1004patest.exe: CMakeFiles/1004patest.dir/1004patest.cpp.obj
1004patest.exe: CMakeFiles/1004patest.dir/build.make
1004patest.exe: CMakeFiles/1004patest.dir/linklibs.rsp
1004patest.exe: CMakeFiles/1004patest.dir/objects1.rsp
1004patest.exe: CMakeFiles/1004patest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1004patest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1004patest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1004patest.dir/build: 1004patest.exe

.PHONY : CMakeFiles/1004patest.dir/build

CMakeFiles/1004patest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1004patest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1004patest.dir/clean

CMakeFiles/1004patest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog\cmake-build-debug D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog\cmake-build-debug D:\Programmer\Github_repository\PAT_test_log\my_PATtest_learn_dailylog\cmake-build-debug\CMakeFiles\1004patest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1004patest.dir/depend
