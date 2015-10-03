cmake_minimum_required (VERSION 2.8) 
 
set (PROJECT patterns) 
 
project (${PROJECT}) 
 
file (GLOB headers "include/*.h")

file (GLOB sources "src/*.cpp")
 
add_executable (${PROJECT} ${headers} ${sources})
