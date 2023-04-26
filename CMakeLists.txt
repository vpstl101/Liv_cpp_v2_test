cmake_minimum_required(VERSION 3.24)
project(LIb_cpp_v2)

set(CMAKE_CXX_STANDARD 17)

add_executable(LIb_cpp_v2 main.cpp LibManager.cpp LibManager.h Member.cpp Member.h CreatArray.h BookInfo.cpp BookInfo.h LoginException.h AdminMode.cpp AdminMode.h)
