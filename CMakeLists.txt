cmake_minimum_required(VERSION 3.16)
project(chess)

set(CMAKE_C_STANDARD 99)

include_directories(/opt/homebrew/opt/raylib/include)
link_directories(/opt/homebrew/opt/raylib/lib)

add_executable(chess main.c)

target_link_libraries(chess raylib
        "-framework CoreVideo"
        "-framework IOKit"
        "-framework Cocoa"
        "-framework GLUT"
        "-framework OpenGL"
)
