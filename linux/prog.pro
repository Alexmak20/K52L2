TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt


@
VPATH += ../src/
SOURCES += main.cpp unit.cpp Arena.cpp Alexmak.cpp Loner.cpp Warrior.cpp terminator.cpp
HEADERS += unit.h Arena.h Alexmak.h Loner.h terminator.h Warrior.h
@

