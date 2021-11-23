#-------------------------------------------------
#
# Project created by QtCreator 2021-11-17T17:43:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Aerolinea
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    listarcliente.cpp \
    registraraerolinea.cpp \
    registrarcliente.cpp \
    registrarviaje.cpp \
    seleccionarcategoriaavion.cpp \
    buscarcliente.cpp

HEADERS  += mainwindow.h \
    listarcliente.h \
    registraraerolinea.h \
    registrarcliente.h \
    registrarviaje.h \
    seleccionarcategoriaavion.h \
    buscarcliente.h

FORMS    += mainwindow.ui \
    listarcliente.ui \
    registraraerolinea.ui \
    registrarcliente.ui \
    registrarviaje.ui \
    seleccionarcategoriaavion.ui \
    buscarcliente.ui
