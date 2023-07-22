cmake_minimum_required(VERSION 3.27.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # For the LSP

project(ps VERSION 1.0)

# Directing cmake to where all the libraries are
set(CMAKE_PREFIX_PATH ${CMAKE_SOURCE_DIR}/external/)

find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_mixer REQUIRED)

set(SOURCES
  # Base files
  src/cpp/main.cpp
  src/cpp/Game.cpp

  # Core
  src/cpp/Core/Vec2.cpp
  src/cpp/Core/Color.cpp
  src/cpp/Core/Timer.cpp

  # Entities 
  src/cpp/Entities/Entity.cpp
  src/cpp/Entities/Player.cpp
  src/cpp/Entities/Bullet.cpp
  src/cpp/Entities/Enemy.cpp
  src/cpp/Entities/Star.cpp

  # Scenes 
  src/cpp/Scenes/MenuScene.cpp
  src/cpp/Scenes/GameScene.cpp
  src/cpp/Scenes/OverScene.cpp

  # UI
  src/cpp/UI/Text.cpp

  # Managers
  src/cpp/Managers/SceneManager.cpp
  src/cpp/Managers/EventManager.cpp
  src/cpp/Managers/AssetManager.cpp
  src/cpp/Managers/EntityManager.cpp
  src/cpp/Managers/SpawnManager.cpp
  src/cpp/Managers/ScoreManager.cpp
  src/cpp/Managers/AudioManager.cpp

  # Misc.
  src/cpp/Utls.cpp
  src/cpp/Background.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

# Copying the assets folder to the binary
file(COPY assets DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Adding the include for the above libraries
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/external/include)

# Adding the libraries to the project
target_link_libraries(${PROJECT_NAME} 
  SDL2::SDL2 
  ${SDL2main} 
  SDL2_image::SDL2_image 
  SDL2_ttf::SDL2_ttf
  SDL2_mixer::SDL2_mixer
)

# For windows builds
add_definitions(-DSDL_MAIN_HANDELED)
