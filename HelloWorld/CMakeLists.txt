cmake_minimum_required(VERSION 3.22)

# (Name Version Accepted Langaue)
# CXX is usesd as ++ are operators and therefore mnake CMAKE fail
project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# When making a library and want to use it you need to make sure the library gets linked with the exectuable
add_library(Library STATIC lib.cpp)

# As we have one single source file and want to compile into an exectuable
# What is STATIC?
add_executable(hello main.cpp)

# Linking executable with library - what is PUBLIC?
target_link_libraries(hello PUBLIC Library)