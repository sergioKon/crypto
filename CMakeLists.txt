cmake_minimum_required(VERSION 3.20)

if(POLICY CMP0144)
    cmake_policy(SET CMP0144 NEW)
endif()

project(Crypto)

set(CMAKE_CXX_STANDARD 23)

find_package(Botan)

add_executable(Crypto main.cpp)

target_include_directories(Crypto PRIVATE "C:/Botan-3.5.0/build/include/public/")

target_link_directories(Crypto PRIVATE "C:/Botan-3.5.0/libbotan-3")
target_link_libraries(Crypto PRIVATE botan-3)



