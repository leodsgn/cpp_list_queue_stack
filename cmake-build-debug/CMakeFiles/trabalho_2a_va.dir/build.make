# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/trabalho_2a_va.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/trabalho_2a_va.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trabalho_2a_va.dir/flags.make

CMakeFiles/trabalho_2a_va.dir/main.cpp.o: CMakeFiles/trabalho_2a_va.dir/flags.make
CMakeFiles/trabalho_2a_va.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/trabalho_2a_va.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trabalho_2a_va.dir/main.cpp.o -c "/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va/main.cpp"

CMakeFiles/trabalho_2a_va.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trabalho_2a_va.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va/main.cpp" > CMakeFiles/trabalho_2a_va.dir/main.cpp.i

CMakeFiles/trabalho_2a_va.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trabalho_2a_va.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va/main.cpp" -o CMakeFiles/trabalho_2a_va.dir/main.cpp.s

CMakeFiles/trabalho_2a_va.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/trabalho_2a_va.dir/main.cpp.o.requires

CMakeFiles/trabalho_2a_va.dir/main.cpp.o.provides: CMakeFiles/trabalho_2a_va.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/trabalho_2a_va.dir/build.make CMakeFiles/trabalho_2a_va.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/trabalho_2a_va.dir/main.cpp.o.provides

CMakeFiles/trabalho_2a_va.dir/main.cpp.o.provides.build: CMakeFiles/trabalho_2a_va.dir/main.cpp.o


# Object files for target trabalho_2a_va
trabalho_2a_va_OBJECTS = \
"CMakeFiles/trabalho_2a_va.dir/main.cpp.o"

# External object files for target trabalho_2a_va
trabalho_2a_va_EXTERNAL_OBJECTS =

trabalho_2a_va: CMakeFiles/trabalho_2a_va.dir/main.cpp.o
trabalho_2a_va: CMakeFiles/trabalho_2a_va.dir/build.make
trabalho_2a_va: CMakeFiles/trabalho_2a_va.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable trabalho_2a_va"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trabalho_2a_va.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trabalho_2a_va.dir/build: trabalho_2a_va

.PHONY : CMakeFiles/trabalho_2a_va.dir/build

CMakeFiles/trabalho_2a_va.dir/requires: CMakeFiles/trabalho_2a_va.dir/main.cpp.o.requires

.PHONY : CMakeFiles/trabalho_2a_va.dir/requires

CMakeFiles/trabalho_2a_va.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/trabalho_2a_va.dir/cmake_clean.cmake
.PHONY : CMakeFiles/trabalho_2a_va.dir/clean

CMakeFiles/trabalho_2a_va.dir/depend:
	cd "/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va" "/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va" "/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va/cmake-build-debug" "/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va/cmake-build-debug" "/Users/leoribeiro/Workspace/UEG/estrutura_de_dados/2o Bimestre/trabalho_2a_va/cmake-build-debug/CMakeFiles/trabalho_2a_va.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/trabalho_2a_va.dir/depend
