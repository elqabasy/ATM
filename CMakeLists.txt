cmake_minimum_required(VERSION 3.26)
project(ATM)

set(CMAKE_CXX_STANDARD 23)

add_executable(ATM main.cpp
        include/ATM.h
        source/ATM.cpp

        include/account.h
        source/account.cpp

        include/console.h
        source/console.cpp
        source/Help.cpp
        include/Help.h
        include/Constants.h)


