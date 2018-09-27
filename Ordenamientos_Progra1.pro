#-------------------------------------------------
#
# Project created by QtCreator 2018-09-24T17:54:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ordenamientos_Progra1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        interfaz.cpp \
    bi_bubblesort.cpp \
    binsort.cpp \
    bubblesort.cpp \
    cola.cpp \
    heapsort.cpp \
    insertion.cpp \
    listadoblementeenlazada.cpp \
    listaenlazada.cpp \
    mergesort.cpp \
    nodo.cpp \
    objetoprueba.cpp \
    pila.cpp \
    quicksort.cpp \
    radixsort.cpp \
    selection.cpp \
    shell.cpp \
    mainwindow.cpp

HEADERS += \
        interfaz.h \
    bi_bubblesort.h \
    binsort.h \
    bubblesort.h \
    cola.h \
    heapsort.h \
    insertion.h \
    listadoblementeenlazada.h \
    listaenlazada.h \
    mergesort.h \
    nodo.h \
    pila.h \
    quicksort.h \
    radixsort.h \
    selection.h \
    shell.h \
    mainwindow.h

FORMS += \
        interfaz.ui \
    mainwindow.ui

RESOURCES += \
    imagenes.qrc
