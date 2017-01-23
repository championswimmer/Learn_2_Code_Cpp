cmake_minimum_required(VERSION 3.6)
set(CMAKE_CXX_STANDARD 11)

project(helloworld)


    #set(SOURCE_FILES helloworld.cpp)
    add_executable(helloworld helloworld.cpp)

project(inout)

    set(INOUT_SRC inout/main.cpp inout/addnum.cpp inout/addnum.h)
    add_executable(inout ${INOUT_SRC})


