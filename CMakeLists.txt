cmake_minimum_required(VERSION 3.26)
project(ATM)

set(CMAKE_CXX_STANDARD 23)

add_executable(ATM main.cpp
        source/BankDatabase.cpp
        source/ATM.cpp
        source/Account.cpp)


