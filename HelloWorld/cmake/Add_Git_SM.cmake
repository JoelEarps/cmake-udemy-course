function(add_git_submodule dir)
    find_package(Git REQUIRED)
    if (NOT EXISTS ${dir}/CMakeLists.txt)
        execute_process(COMMAND ${GIT_EXECUTABLE}
            submodule update --init --recursive -- ${CMAKE_SOURCE_DIR}/${dir}
            WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
            )
    endif()

    if (EXISTS ${dir}/CMakeLists.txt)
        add_subdirectory(${dir})
    endif()
    
endfunction(add_git_submodule)
# this function checks for the git executable and then update the directory if it doesn't exist