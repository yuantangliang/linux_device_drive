cmake_minimum_required(VERSION 3.10)
project(vivi)

INCLUDE_DIRECTORIES(/usr/src/linux-headers-4.13.0-41-generic/include)

add_executable(Tutorial camera_vivi/vivi.c)

