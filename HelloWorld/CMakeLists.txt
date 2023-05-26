cmake_minimum_required(VERSION 3.22)

# (Name Version Accepted Langaue)
# CXX is usesd as ++ are operators and therefore mnake CMAKE fail
project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# ALWAYS SET THESE!!!
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Make a vairable using set - make sure it does not clash with reserved names
set(LIBRARY_NAME "Library")
set(EXE_NAME "Exectuable")

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(Add_Git_SM)

add_git_submodule(external/json)

add_subdirectory(src)
add_subdirectory(configured)
add_subdirectory(app)





