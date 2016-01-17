cmake_minimum_required(VERSION 3.3)
project(Chess)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt4 REQUIRED QtGui QtXml)
set(SOURCE_FILES Board.cpp Board.h Pieces/Piece.cpp Pieces/Piece.h PieceType.h Path.h Color.h Pieces/King.cpp Pieces/King.h Path.cpp Grid.cpp Grid.h Chess.cpp EventHandlers.h ChessWindow.cpp ChessWindow.h ChessComponent.cpp ChessComponent.h constants.h)
add_executable(Chess ${SOURCE_FILES})
target_link_libraries(Chess Qt4::QtGui Qt4::QtXml)

set(BOOST_ROOT "~/CPPLibraries/boost_1_60_0")

find_package(Boost 1.57.0)

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()

