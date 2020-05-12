cmake_minimum_required (VERSION 2.8)
  
project(cpp-filesystem-sandbox)

find_package(Boost REQUIRED)

include_directories(
        ${Boost_INCLUDE_DIRS}
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread")

add_executable(fsand src/main.cpp)

target_link_libraries(fsand ${OpenCV_LIBS} ${Boost_LIBRARIES})

