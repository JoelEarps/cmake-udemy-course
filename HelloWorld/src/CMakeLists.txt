# When making a library and want to use it you need to make sure the library gets linked with the exectuable
# What is STATIC?
add_library(${LIBRARY_NAME} STATIC lib.cpp)
target_include_directories(${LIBRARY_NAME} PUBLIC "./")