# When making a library and want to use it you need to make sure the library gets linked with the exectuable
# What is STATIC?

set(LIBRARY_SOURCES "lib.cpp")
set(LIBRARY_HEADERS "lib.h")

set(LIBRARY_INCLUDES 
    "./" 
    "${CMAKE_BINARY_DIR}/configured_files/include")

add_library(${LIBRARY_NAME} STATIC 
${LIBRARY_SOURCES}
${LIBRARY_HEADERS})

target_include_directories(${LIBRARY_NAME} PUBLIC 
    ${LIBRARY_INCLUDES}
)

target_link_libraries(${LIBRARY_NAME} PUBLIC
    nlohmann_json::nlohmann_json
    spdlog::spdlog
    cxxopts::cxxopts
    fmt::fmt)