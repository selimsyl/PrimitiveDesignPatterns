cmake_minimum_required(VERSION 3.10)

project(factoryMethod)

file(GLOB source *.cpp)

add_executable(factoryMethod ${source})