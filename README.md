# Hourglass interface pattern
- Code was motivated by this presentation at CppCon 2014
- http://www.slideshare.net/StefanusDuToit/cpp-con-2014-hourglass-interfaces-for-c-apis
- Used it as an opportunity to learn how to
    - Create dylib shared libraries in OS X using cmake
    - Configure Vim plugin YouCompleteMe for a C++ project

# Build instructions
- checkout to /hourglass/src
- create /hourglass/build
- cd /hourglass/build
- cmake ../src
- make

# Notes
Trivia picked up as I continue to learn how to do C++ on OS X
- otool -L to list dylib dependencies of binary
- -fvisibility=hidden flag to hide symbols by default
- cmake -DCMAKE_BUILD_TYPE=debug . to generate debug make files
- set(CMAKE_EXPORT_COMPILE_COMMANDS 1) to generate json file for ycm
