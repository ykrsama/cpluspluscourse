
# Set up the project
cmake_minimum_required( VERSION 3.1 )
project( pointers LANGUAGES CXX )

# Set up the compilation environment.
include( "${CMAKE_CURRENT_SOURCE_DIR}/../CompilerSettings.cmake" )

# Set up the library.
add_library( pointersLib pointers.hpp pointers.cpp)
target_include_directories( pointersLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} )
set_target_properties( pointersLib PROPERTIES OUTPUT_NAME "pointers" )

# Set up the executable.
add_executable( pointers pointers.cpp)
target_link_libraries( pointers PRIVATE pointersLib )

# Create the "solution executable"
add_executable( pointers.sol EXCLUDE_FROM_ALL solution/pointers.sol.cpp)
target_link_libraries( pointers.sol PRIVATE pointersLib )
if( TARGET solution )
    add_dependencies( solution pointers.sol )
endif()
