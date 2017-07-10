#-------------------------------------------------
#
# Project created by QtCreator 2017-07-10T23:01:32
#
#-------------------------------------------------

QT       -= gui

TARGET = anpr
TEMPLATE = lib

INCLUDEPATH += src \
            include

SOURCES +=  \
    src/anpr.cpp \
    src/area.cpp \
    src/anprapi.cpp

HEADERS +=  \
    src/anpr.h \
    src/area.h \
    include/anprapi.h

unix {
    target.path = /usr/local/lib/anpr
    INSTALLS += target

    header.path = /usr/local/include/anpr
    header.files = include/*
    INSTALLS += header
}
