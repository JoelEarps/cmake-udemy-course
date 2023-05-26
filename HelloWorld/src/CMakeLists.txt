# When making a library and want to use it you need to make sure the library gets linked with the exectuable
# What is STATIC?

set(LIBRARY_SOURCES "lib.cpp")
set(LIBRARY_HEADERS "lib.h")

add_library(${LIBRARY_NAME} STATIC 
${LIBRARY_SOURCES}
${LIBRARY_HEADERS})

target_include_directories(${LIBRARY_NAME} PUBLIC 
"./" 
"${CMAKE_BINARY_DIR}/configured_files/include"
)