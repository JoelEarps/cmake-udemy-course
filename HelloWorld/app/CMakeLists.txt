# As we have one single source file and want to compile into an exectuable
add_executable(${EXE_NAME} main.cpp)
# Linking executable with library - what is PUBLIC?
target_link_libraries(${EXE_NAME} PUBLIC ${LIBRARY_NAME})
