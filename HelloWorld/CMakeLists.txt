cmake_minimum_required(VERSION 3.22)

# (Name Version Accepted Langaue)
# CXX is usesd as ++ are operators and therefore mnake CMAKE fail
project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# ALWAYS SET THESE!!!
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(COMPILE_EXECTUABLE "Whether to compile exectuable" OFF)

# Make a vairable using set - make sure it does not clash with reserved names
set(LIBRARY_NAME "Library")
set(EXE_NAME "Exectubale")

add_subdirectory(src)

if (COMPILE_EXECUTABLE)
    add_subdirectory(app)
else()
    message("W/O exe. compiling")
endif()





