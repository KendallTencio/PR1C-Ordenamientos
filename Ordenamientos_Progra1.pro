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
    objetoprueba.cpp \
    mainwindow.cpp \
    Estructuras/cola.cpp \
    Estructuras/listadoblementeenlazada.cpp \
    Estructuras/listaenlazada.cpp \
    Estructuras/nodocola.cpp \
    Estructuras/nodoListaEnlazada.cpp \
    Estructuras/nodoPila.cpp \
    Estructuras/pila.cpp \
    Ordenamientos/bi_bubblesort.cpp \
    Ordenamientos/binsort.cpp \
    Ordenamientos/bubblesort.cpp \
    Ordenamientos/heapsort.cpp \
    Ordenamientos/insertion.cpp \
    Ordenamientos/mergesort.cpp \
    Ordenamientos/quicksort.cpp \
    Ordenamientos/radixsort.cpp \
    Ordenamientos/selection.cpp \
    Ordenamientos/shell.cpp

HEADERS += \
    mainwindow.h \
    Estructuras/cola.h \
    Estructuras/listadoblementeenlazada.h \
    Estructuras/listaenlazada.h \
    Estructuras/nodocola.h \
    Estructuras/nodoListaEnlazada.h \
    Estructuras/nodoPila.h \
    Estructuras/pila.h \
    Ordenamientos/bi_bubblesort.h \
    Ordenamientos/binsort.h \
    Ordenamientos/bubblesort.h \
    Ordenamientos/heapsort.h \
    Ordenamientos/insertion.h \
    Ordenamientos/mergesort.h \
    Ordenamientos/quicksort.h \
    Ordenamientos/radixsort.h \
    Ordenamientos/selection.h \
    Ordenamientos/shell.h


FORMS += \
        interfaz.ui \
    mainwindow.ui

RESOURCES += \
    imagines.qrc
