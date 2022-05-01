cmake_minimum_required(VERSION 3.21)
project(Lab910)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab910 main.cpp Ticket.cpp Ticket.h RepoInMemory.cpp RepoInMemory.h Tests.h Tests.cpp)
