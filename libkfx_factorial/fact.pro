# Archivo de configuración de proyecto para
# usar Qt-crator
QT -= core gui

SOURCES += \
    fstatic.cpp \
    calc.cpp \
    fact_test.cc

HEADERS += \
    factorial.h

unix:!macx: LIBS += -L$$PWD/../../../../../pkg/github.com/kranfix/ejemcpp/ -lkfx_factorial

INCLUDEPATH += $$PWD/../../../../../inc
DEPENDPATH += $$PWD/../../../../../inc

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../../pkg/github.com/kranfix/ejemcpp/libkfx_factorial.a
