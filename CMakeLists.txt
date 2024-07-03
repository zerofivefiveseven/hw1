cmake_minimum_required(3.30)
set(CMP0048 NEW)
if(DEFINED ENV{GITHUB_RUN_NUMBER})
    set(PATCH_NUM $ENV{GITHUB_RUN_NUMBER})
else()
    set(PATCH_NUM 0)
endif()

project(hw1
        LANGUAGES C CXX
        VERSION 0.0.${PATCH_NUM}
        HOMEPAGE_URL https://github.com/zerofivefiveseven/hw1
        DESCRIPTION "homework for first class of OTUS course"

)

set(CMAKE_BUILD_TYPE Release)
add_executable(hw1 main.cpp)