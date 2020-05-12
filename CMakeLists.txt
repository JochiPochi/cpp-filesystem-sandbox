cmake_minimum_required (VERSION 2.8)

project(cpp-filesystem-sandbox)

find_package(Boost REQUIRED)

include_directories(
        ${Boost_INCLUDE_DIRS}
)

# Output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Set Flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pthread")

# Executables
add_executable(fsand src/main.cpp)

target_link_libraries(fsand stdc++fs ${OpenCV_LIBS} ${Boost_LIBRARIES})

