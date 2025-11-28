

cmake_minimum_required(VERSION 3.5)

project(including_source_files)

set(SOURCES
    src/main.c++
    src/lib.c++
)


add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)