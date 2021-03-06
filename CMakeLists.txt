cmake_minimum_required(VERSION 3.10)

project(Disease_propagation)

file(GLOB PROJ_SRC
    "sources/*.cpp"
    "includes/*.h"
)


add_executable(Disease_propagation ${PROJ_SRC})

find_package(SFML COMPONENTS system window graphics REQUIRED)
IF (WIN32)
  target_include_directories(Disease_propagation PRIVATE ${CMAKE_SOURCE_DIR}/includes)
  target_link_libraries(Disease_propagation PRIVATE     
        sfml-system
        sfml-main
        sfml-window
        sfml-graphics
    )
ELSE()
  set(SFML_DIR "${CMAKE_SOURCE_DIR}/dependencies/SFML/lib/cmake/SFML" CACHE FILEPATH "The directory containing a CMake configuration file for SFML.")
  target_include_directories(Disease_propagation PRIVATE ${CMAKE_SOURCE_DIR}/includes)
  target_link_libraries(Disease_propagation PRIVATE     
        sfml-system
        sfml-window
        sfml-graphics
    )
ENDIF()

target_include_directories(Disease_propagation PRIVATE ${SFML_INCLUDE_DIR})
