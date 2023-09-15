#include <iostream>
#include "lib.h"
#include "config.hpp"
#include <nlohmann/json.hpp>
#include <cxxopts.hpp>
#include <fmt/format.h>
#include <spdlog/spdlog.h>


void print_hello_world()
{
    std::cout << "JSON Lib Version: " << NLOHMANN_JSON_VERSION_MAJOR << NLOHMANN_JSON_VERSION_MINOR << NLOHMANN_JSON_VERSION_PATCH << std::endl;
    std::cout << "FMT Lib Version: " << FMT_VERSION << std::endl;
    std::cout << "CXOPPTS Lib Version: " << CXXOPTS__VERSION_MAJOR << CXXOPTS__VERSION_MINOR << CXXOPTS__VERSION_PATCH << std::endl;
    std::cout << "SDPLOG Lib Version: " << SPDLOG_VER_MAJOR << SPDLOG_VER_MINOR << SPDLOG_VER_PATCH << std::endl;
}