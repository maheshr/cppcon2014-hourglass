
if (${CMAKE_CXX_COMPILER_ID} MATCHES Clang)
  set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fvisibility=hidden")
endif()

# Add library
# SHARED creates dylib on OS X
add_library(mylib SHARED team_api.cpp)
