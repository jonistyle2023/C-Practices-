# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\jonat.COSMOS-PC\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\jonat.COSMOS-PC\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices-

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices-\cmake-build-default

# Include any dependencies generated for this target.
include CMakeFiles/ejemplo9.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ejemplo9.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ejemplo9.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ejemplo9.dir/flags.make

CMakeFiles/ejemplo9.dir/section3/ejemplo9.cpp.obj: CMakeFiles/ejemplo9.dir/flags.make
CMakeFiles/ejemplo9.dir/section3/ejemplo9.cpp.obj: C:/Users/jonat.COSMOS-PC/CLionProjects/C-Practices-/section3/ejemplo9.cpp
CMakeFiles/ejemplo9.dir/section3/ejemplo9.cpp.obj: CMakeFiles/ejemplo9.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices-\cmake-build-default\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ejemplo9.dir/section3/ejemplo9.cpp.obj"
	C:\Users\jonat.COSMOS-PC\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ejemplo9.dir/section3/ejemplo9.cpp.obj -MF CMakeFiles\ejemplo9.dir\section3\ejemplo9.cpp.obj.d -o CMakeFiles\ejemplo9.dir\section3\ejemplo9.cpp.obj -c C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices-\section3\ejemplo9.cpp

CMakeFiles/ejemplo9.dir/section3/ejemplo9.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ejemplo9.dir/section3/ejemplo9.cpp.i"
	C:\Users\jonat.COSMOS-PC\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices-\section3\ejemplo9.cpp > CMakeFiles\ejemplo9.dir\section3\ejemplo9.cpp.i

CMakeFiles/ejemplo9.dir/section3/ejemplo9.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ejemplo9.dir/section3/ejemplo9.cpp.s"
	C:\Users\jonat.COSMOS-PC\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices-\section3\ejemplo9.cpp -o CMakeFiles\ejemplo9.dir\section3\ejemplo9.cpp.s

# Object files for target ejemplo9
ejemplo9_OBJECTS = \
"CMakeFiles/ejemplo9.dir/section3/ejemplo9.cpp.obj"

# External object files for target ejemplo9
ejemplo9_EXTERNAL_OBJECTS =

ejemplo9.exe: CMakeFiles/ejemplo9.dir/section3/ejemplo9.cpp.obj
ejemplo9.exe: CMakeFiles/ejemplo9.dir/build.make
ejemplo9.exe: CMakeFiles/ejemplo9.dir/linkLibs.rsp
ejemplo9.exe: CMakeFiles/ejemplo9.dir/objects1.rsp
ejemplo9.exe: CMakeFiles/ejemplo9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices-\cmake-build-default\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ejemplo9.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ejemplo9.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ejemplo9.dir/build: ejemplo9.exe
.PHONY : CMakeFiles/ejemplo9.dir/build

CMakeFiles/ejemplo9.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ejemplo9.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ejemplo9.dir/clean

CMakeFiles/ejemplo9.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices- C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices- C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices-\cmake-build-default C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices-\cmake-build-default C:\Users\jonat.COSMOS-PC\CLionProjects\C-Practices-\cmake-build-default\CMakeFiles\ejemplo9.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ejemplo9.dir/depend

