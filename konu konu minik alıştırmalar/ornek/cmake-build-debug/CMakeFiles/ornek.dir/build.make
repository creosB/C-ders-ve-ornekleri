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
CMAKE_COMMAND = "D:\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Administrator\Documents\proje\uniders\ornek

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Administrator\Documents\proje\uniders\ornek\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ornek.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ornek.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ornek.dir/flags.make

CMakeFiles/ornek.dir/main.c.obj: CMakeFiles/ornek.dir/flags.make
CMakeFiles/ornek.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\Documents\proje\uniders\ornek\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ornek.dir/main.c.obj"
	D:\ming\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ornek.dir\main.c.obj   -c C:\Users\Administrator\Documents\proje\uniders\ornek\main.c

CMakeFiles/ornek.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ornek.dir/main.c.i"
	D:\ming\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Administrator\Documents\proje\uniders\ornek\main.c > CMakeFiles\ornek.dir\main.c.i

CMakeFiles/ornek.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ornek.dir/main.c.s"
	D:\ming\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Administrator\Documents\proje\uniders\ornek\main.c -o CMakeFiles\ornek.dir\main.c.s

# Object files for target ornek
ornek_OBJECTS = \
"CMakeFiles/ornek.dir/main.c.obj"

# External object files for target ornek
ornek_EXTERNAL_OBJECTS =

ornek.exe: CMakeFiles/ornek.dir/main.c.obj
ornek.exe: CMakeFiles/ornek.dir/build.make
ornek.exe: CMakeFiles/ornek.dir/linklibs.rsp
ornek.exe: CMakeFiles/ornek.dir/objects1.rsp
ornek.exe: CMakeFiles/ornek.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Administrator\Documents\proje\uniders\ornek\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ornek.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ornek.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ornek.dir/build: ornek.exe

.PHONY : CMakeFiles/ornek.dir/build

CMakeFiles/ornek.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ornek.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ornek.dir/clean

CMakeFiles/ornek.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Administrator\Documents\proje\uniders\ornek C:\Users\Administrator\Documents\proje\uniders\ornek C:\Users\Administrator\Documents\proje\uniders\ornek\cmake-build-debug C:\Users\Administrator\Documents\proje\uniders\ornek\cmake-build-debug C:\Users\Administrator\Documents\proje\uniders\ornek\cmake-build-debug\CMakeFiles\ornek.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ornek.dir/depend

