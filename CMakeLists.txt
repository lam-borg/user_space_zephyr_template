cmake_minimum_required(VERSION 3.20.0)

set(PROJECT_NAME zephyr_userspace_app)

set(BOARD nucleo_f746zg)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(${PROJECT_NAME})
# add include directories

target_include_directories(app PRIVATE src)

#root application
target_sources(app PRIVATE src/main.cpp)

# additional folders with relevant code
add_subdirectory(src/processes)