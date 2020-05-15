cmake_minimum_required(VERSION 3.15)
project(googleTest)

set(CMAKE_CXX_STANDARD 14)

# setup librairies and main.cpp executable
add_subdirectory(sources) # add all librairies
include_directories(sources) # headers?

add_executable(app_run main.cpp) # create executable

# =============================================================
### MODIFY
# executable uses those librairies
target_link_libraries(app_run
        Person_lib)
# =============================================================

# google tests
add_subdirectory(tests)