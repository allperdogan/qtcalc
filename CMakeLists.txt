cmake_minimum_required(VERSION 3.20)
project(qtcalc)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(qtcalc main.cpp qtcalc.cpp qtcalc.h qtcalc.ui secondcalc.cpp secondcalc.h secondcalc.ui)
target_link_libraries(qtcalc
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

