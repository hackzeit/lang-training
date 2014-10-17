#-------------------------------------------------
#
# Project created by QtCreator 2014-09-29T14:46:27
#
#-------------------------------------------------

QT       -= core gui

TARGET = fibonacci
TEMPLATE = lib

DEFINES += FIBONACCI_LIBRARY

SOURCES += fibonacci.cpp

HEADERS += fibonacci.h\
        fibonacci_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
