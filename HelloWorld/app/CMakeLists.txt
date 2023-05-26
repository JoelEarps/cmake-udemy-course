set(EXE_SOURCES
    "main.cpp")

# As we have one single source file and want to compile into an exectuable
add_executable(${EXE_NAME} ${EXE_SOURCES}) 
# Linking executable with library - what is PUBLIC?
target_link_libraries(${EXE_NAME} PUBLIC 
    ${LIBRARY_NAME}
    nlohmann_json)
