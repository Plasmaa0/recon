cmake_minimum_required(VERSION 3.24)
project(recon)

set(CMAKE_CXX_STANDARD 23)

add_library(recon SHARED source/recon.cpp test/main.cpp include/recon/type_name.h)
target_include_directories(recon PUBLIC include)


add_executable(recon_test test/main.cpp)
target_link_libraries(recon_test recon)
