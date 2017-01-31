cmake_minimum_required(VERSION 3.6)
set(CMAKE_CXX_STANDARD 11)

project(helloworld)


    #set(SOURCE_FILES helloworld.cpp)
    add_executable(helloworld helloworld.cpp)

project(inout)

    set(INOUT_SRC inout/main.cpp inout/addnum.cpp inout/addnum.h)
    add_executable(inout ${INOUT_SRC})


project(pointers)

    set(PTR_SRC pointers/main.cpp pointers/basicptrs.cpp pointers/basicptrs.h pointers/ptrargs.cpp pointers/ptrargs.h pointers/arraypointers.cpp pointers/arraypointers.h)
    add_executable(pointers ${PTR_SRC})

project(linkedlist)

    set(LL_SRC linkedlist/main.cpp linkedlist/IntLinkedList.cpp linkedlist/IntLinkedList.h linkedlist/LinkedList.cpp linkedlist/LinkedList.h)
    add_executable(linkedlist ${LL_SRC})

