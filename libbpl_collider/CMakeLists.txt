cmake_minimum_required(VERSION 3.25)

project(bpl_collider)

set(CMAKE_CXX_STANDARD 20)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(SDL2 REQUIRED CONFIG REQUIRED COMPONENTS SDL2)

include_directories(include)

set(PUBLIC_HEADER include/bpl/collider/Collider.h
        bpl/collider/Floor.h
        bpl/collider/Ladder.h)
set(SOURCE_FILES src/Floor.cpp src/Collider.cpp src/Ladder.cpp)

add_library(bpl_collider SHARED ${SOURCE_FILES} ${PUBLIC_HEADER} )
target_link_libraries(bpl_collider PRIVATE ${CURL_LIBRARIES} SDL2::SDL2)

install(TARGETS bpl_collider DESTINATION lib)
install(FILES include/bpl/collider/Collider.h DESTINATION include/bpl/net)
install(FILES include/bpl/collider/Floor.h DESTINATION include/bpl/net)
install(FILES include/bpl/collider/Ladder.h DESTINATION include/bpl/net)