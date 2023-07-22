# Settings to compile for Windows
set(CMAKE_SYSTEM_NAME Windows)

# Use Mingw when on Windows machines
set(CMAKE_C_COMPILER x86_64-w64-mingw32-gcc)
set(CMAKE_CXX_COMPILER x86_64-w64-mingw32-g++)

# Getting the target platform's environment
set(CMAKE_FIND_ROOT_PATH /usr/i686-w64-mingw32 /home/mohamed/mingw_install)

# Adjust the FIND_XXX() commands to search programs in the host environment
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)

# Search for headers and libs in the target environment
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
