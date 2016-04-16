TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt


@
VPATH += ../src/
SOURCES += main.cpp unit.cpp Arena.cpp terminator.cpp #Alexmak.cpp
HEADERS += unit.h Arena.h terminator.h #Alexmak.h
@

