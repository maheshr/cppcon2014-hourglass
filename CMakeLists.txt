cmake_minimum_required(VERSION 2.8)
project(hourglass)
find_package(Boost 1.54.0)

# Common m# preamble
set(CMAKE_VERBOSE_MAKEFILE false)
if (${CMAKE_CXX_COMPILER_ID} MATCHES Clang)
  set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -stdlib=libc++ -Wall")
endif()
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

# Boost support
include_directories("/usr/local/include")
link_directories("/usr/local/lib")
set (EXTRA_LIBS ${EXTRA_LIBS} boost_system)

# link to our library
include_directories("${PROJECT_SOURCE_DIR}/mylib")
add_subdirectory(mylib)
set (EXTRA_LIBS ${EXTRA_LIBS} mylib)

# Add the  main program
add_executable(main main.cpp)
target_link_libraries(main ${EXTRA_LIBS})
