cmake_minimum_required(VERSION 3.10)
project(qtstarter)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)

add_executable(qtstarter main.cpp helloWorld.cpp helloWorld.h)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

target_compile_definitions(qtstarter PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(qtstarter PRIVATE Qt5::Core Qt5::Widgets)

include(CTest)
add_subdirectory(test)