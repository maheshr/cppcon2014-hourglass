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
- to list dylib dependencies of binary

        otool -L
- flag to hide symbols by default

        -fvisibility=hidden
- to generate debug make files

        cmake -DCMAKE_BUILD_TYPE=debug
- to generate json file for ycm

        set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
- Generate default llvm .clang-format using 

        ~/llvmbuild/build/Release+Asserts/bin/clang-format -style=llvm -dump-config > .clang-format

- Xcode6 changed the location of C++ include files. Learned that you can dump
  the location of the include files in clang using -MD -MF see
  find\_includes.sh
