cmake_minimum_required(VERSION 3.27)
project(aplicatie_miruna)

set(CMAKE_CXX_STANDARD 17)

add_executable(aplicatie_miruna main.cpp
            piesa.h
            mapa.h
            combo.h
            joc.h
)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/mapa.txt piesa1.txt piesa2.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

