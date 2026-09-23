cmake_minimum_required(VERSION 3.20)
project(Codeforces)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2")

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "*.cpp")

foreach(source ${SOURCES})
    file(RELATIVE_PATH rel_path ${CMAKE_CURRENT_SOURCE_DIR} ${source})

    string(REPLACE "/" "_" target_name ${rel_path})
    string(REPLACE ".cpp" "" target_name ${target_name})
    add_executable(${target_name} ${source})
endforeach()