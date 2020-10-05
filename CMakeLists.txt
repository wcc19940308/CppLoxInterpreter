cmake_minimum_required(VERSION 3.16)
project(craftingInterpreter)

set(CMAKE_CXX_STANDARD 14)

add_executable(craftingInterpreter Lox.cpp Lox.h Scanner.cpp Scanner.h Token.cpp Token.h)