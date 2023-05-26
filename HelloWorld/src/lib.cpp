#include <iostream>
#include "lib.h"
#include "config.hpp"

void print_hello_world()
{
    std::cout << "Hello Tanvir\n";
    std::cout << "Project Name: " << project_name << std::endl;
    std::cout << "Project Version: " << project_version << std::endl;
}