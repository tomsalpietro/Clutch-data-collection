cmake_minimum_required(VERSION 3.10)
project(ClutchDataCollector)

set(CMAKE_CXX_STANDARD 17)

# Add the source directory and include directory
include_directories(include)
add_executable(clutch_data_collector 
    src/main.cpp 
    src/nfl_data_collector.cpp
)

# Link libraries if needed later (e.g., libcurl)
find_package(CURL REQUIRED)
target_link_libraries(clutch_data_collector
    CURL::libcurl
)
