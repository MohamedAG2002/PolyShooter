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
CMAKE_SOURCE_DIR = /home/mohamed/Dev/C++/SDL/PolyShooter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mohamed/Dev/C++/SDL/PolyShooter/build

# Include any dependencies generated for this target.
include CMakeFiles/ps.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ps.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ps.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ps.dir/flags.make

CMakeFiles/ps.dir/src/cpp/main.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/main.cpp.o: ../src/cpp/main.cpp
CMakeFiles/ps.dir/src/cpp/main.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ps.dir/src/cpp/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/main.cpp.o -MF CMakeFiles/ps.dir/src/cpp/main.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/main.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/main.cpp

CMakeFiles/ps.dir/src/cpp/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/main.cpp > CMakeFiles/ps.dir/src/cpp/main.cpp.i

CMakeFiles/ps.dir/src/cpp/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/main.cpp -o CMakeFiles/ps.dir/src/cpp/main.cpp.s

CMakeFiles/ps.dir/src/cpp/Game.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Game.cpp.o: ../src/cpp/Game.cpp
CMakeFiles/ps.dir/src/cpp/Game.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ps.dir/src/cpp/Game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Game.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Game.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Game.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Game.cpp

CMakeFiles/ps.dir/src/cpp/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Game.cpp > CMakeFiles/ps.dir/src/cpp/Game.cpp.i

CMakeFiles/ps.dir/src/cpp/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Game.cpp -o CMakeFiles/ps.dir/src/cpp/Game.cpp.s

CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.o: ../src/cpp/Core/Vec2.cpp
CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Core/Vec2.cpp

CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Core/Vec2.cpp > CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.i

CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Core/Vec2.cpp -o CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.s

CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.o: ../src/cpp/Core/Color.cpp
CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Core/Color.cpp

CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Core/Color.cpp > CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.i

CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Core/Color.cpp -o CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.s

CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.o: ../src/cpp/Core/Timer.cpp
CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Core/Timer.cpp

CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Core/Timer.cpp > CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.i

CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Core/Timer.cpp -o CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.s

CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.o: ../src/cpp/Entities/Entity.cpp
CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Entity.cpp

CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Entity.cpp > CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.i

CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Entity.cpp -o CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.s

CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.o: ../src/cpp/Entities/Player.cpp
CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Player.cpp

CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Player.cpp > CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.i

CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Player.cpp -o CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.s

CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.o: ../src/cpp/Entities/Bullet.cpp
CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Bullet.cpp

CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Bullet.cpp > CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.i

CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Bullet.cpp -o CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.s

CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.o: ../src/cpp/Entities/Enemy.cpp
CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Enemy.cpp

CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Enemy.cpp > CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.i

CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Entities/Enemy.cpp -o CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.s

CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.o: ../src/cpp/Scenes/MenuScene.cpp
CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Scenes/MenuScene.cpp

CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Scenes/MenuScene.cpp > CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.i

CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Scenes/MenuScene.cpp -o CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.s

CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.o: ../src/cpp/Scenes/GameScene.cpp
CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Scenes/GameScene.cpp

CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Scenes/GameScene.cpp > CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.i

CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Scenes/GameScene.cpp -o CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.s

CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.o: ../src/cpp/Scenes/OverScene.cpp
CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Scenes/OverScene.cpp

CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Scenes/OverScene.cpp > CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.i

CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Scenes/OverScene.cpp -o CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.s

CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.o: ../src/cpp/UI/Text.cpp
CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.o -MF CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/UI/Text.cpp

CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/UI/Text.cpp > CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.i

CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/UI/Text.cpp -o CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.s

CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.o: ../src/cpp/Managers/SceneManager.cpp
CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/SceneManager.cpp

CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/SceneManager.cpp > CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.i

CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/SceneManager.cpp -o CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.s

CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.o: ../src/cpp/Managers/EventManager.cpp
CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/EventManager.cpp

CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/EventManager.cpp > CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.i

CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/EventManager.cpp -o CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.s

CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.o: ../src/cpp/Managers/AssetManager.cpp
CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/AssetManager.cpp

CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/AssetManager.cpp > CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.i

CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/AssetManager.cpp -o CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.s

CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.o: ../src/cpp/Managers/EntityManager.cpp
CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/EntityManager.cpp

CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/EntityManager.cpp > CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.i

CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/EntityManager.cpp -o CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.s

CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.o: ../src/cpp/Managers/SpawnManager.cpp
CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/SpawnManager.cpp

CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/SpawnManager.cpp > CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.i

CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/SpawnManager.cpp -o CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.s

CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.o: ../src/cpp/Managers/ScoreManager.cpp
CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/ScoreManager.cpp

CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/ScoreManager.cpp > CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.i

CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Managers/ScoreManager.cpp -o CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.s

CMakeFiles/ps.dir/src/cpp/Utls.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Utls.cpp.o: ../src/cpp/Utls.cpp
CMakeFiles/ps.dir/src/cpp/Utls.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/ps.dir/src/cpp/Utls.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Utls.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Utls.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Utls.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Utls.cpp

CMakeFiles/ps.dir/src/cpp/Utls.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Utls.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Utls.cpp > CMakeFiles/ps.dir/src/cpp/Utls.cpp.i

CMakeFiles/ps.dir/src/cpp/Utls.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Utls.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Utls.cpp -o CMakeFiles/ps.dir/src/cpp/Utls.cpp.s

CMakeFiles/ps.dir/src/cpp/Background.cpp.o: CMakeFiles/ps.dir/flags.make
CMakeFiles/ps.dir/src/cpp/Background.cpp.o: ../src/cpp/Background.cpp
CMakeFiles/ps.dir/src/cpp/Background.cpp.o: CMakeFiles/ps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building CXX object CMakeFiles/ps.dir/src/cpp/Background.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ps.dir/src/cpp/Background.cpp.o -MF CMakeFiles/ps.dir/src/cpp/Background.cpp.o.d -o CMakeFiles/ps.dir/src/cpp/Background.cpp.o -c /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Background.cpp

CMakeFiles/ps.dir/src/cpp/Background.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ps.dir/src/cpp/Background.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Background.cpp > CMakeFiles/ps.dir/src/cpp/Background.cpp.i

CMakeFiles/ps.dir/src/cpp/Background.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ps.dir/src/cpp/Background.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Dev/C++/SDL/PolyShooter/src/cpp/Background.cpp -o CMakeFiles/ps.dir/src/cpp/Background.cpp.s

# Object files for target ps
ps_OBJECTS = \
"CMakeFiles/ps.dir/src/cpp/main.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Game.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Utls.cpp.o" \
"CMakeFiles/ps.dir/src/cpp/Background.cpp.o"

# External object files for target ps
ps_EXTERNAL_OBJECTS =

ps: CMakeFiles/ps.dir/src/cpp/main.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Game.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Core/Vec2.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Core/Color.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Core/Timer.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Entities/Entity.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Entities/Player.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Entities/Bullet.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Entities/Enemy.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Scenes/MenuScene.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Scenes/GameScene.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Scenes/OverScene.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/UI/Text.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Managers/SceneManager.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Managers/EventManager.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Managers/AssetManager.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Managers/EntityManager.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Managers/SpawnManager.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Managers/ScoreManager.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Utls.cpp.o
ps: CMakeFiles/ps.dir/src/cpp/Background.cpp.o
ps: CMakeFiles/ps.dir/build.make
ps: ../external/lib/libSDL2_image-2.0.so.0.600.3
ps: ../external/lib/libSDL2_ttf-2.0.so.0.2000.2
ps: ../external/lib/libSDL2-2.0.so.0.2800.1
ps: CMakeFiles/ps.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Linking CXX executable ps"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ps.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ps.dir/build: ps
.PHONY : CMakeFiles/ps.dir/build

CMakeFiles/ps.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ps.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ps.dir/clean

CMakeFiles/ps.dir/depend:
	cd /home/mohamed/Dev/C++/SDL/PolyShooter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mohamed/Dev/C++/SDL/PolyShooter /home/mohamed/Dev/C++/SDL/PolyShooter /home/mohamed/Dev/C++/SDL/PolyShooter/build /home/mohamed/Dev/C++/SDL/PolyShooter/build /home/mohamed/Dev/C++/SDL/PolyShooter/build/CMakeFiles/ps.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ps.dir/depend

