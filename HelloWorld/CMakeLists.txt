cmake_minimum_required(VERSION 3.22)

# (Name Version Accepted Langaue)
# CXX is usesd as ++ are operators and therefore mnake CMAKE fail
project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# As we have one single source file and want to compile into an exectuable
add_executable(hello main.cpp)