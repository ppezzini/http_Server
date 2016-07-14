cmake_minimum_required(VERSION 3.3)
project(http_Server)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp MyServerApp.cpp MyServerApp.h MyRequestHandlerFactory.cpp MyRequestHandlerFactory.h MyRequestHandler.cpp MyRequestHandler.h)
add_executable(http_Server ${SOURCE_FILES})