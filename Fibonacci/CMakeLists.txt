cmake_minimum_required(VERSION 2.8)
project(fibonacci C CXX)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON) 
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    link_directories(${Boost_LIBRARY_DIRS})
    add_executable(${CMAKE_PROJECT_NAME} main.cpp fibonacci.cpp tests.cpp)
    target_link_libraries(${CMAKE_PROJECT_NAME} ${Boost_LIBRARIES})
endif()

add_custom_target(run
    COMMAND ${CMAKE_PROJECT_NAME}
)
