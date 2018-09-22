QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
    bubblesort.cpp \
    insertion.cpp \
    selection.cpp \
    shell.cpp \
    quicksort.cpp \
    bi_bubblesort.cpp \
    heapsort.cpp \
    objetoprueba.cpp \
    radixsort.cpp \
    binsort.cpp \
    mergesort.cpp \
    nodo.cpp \
    listaenlazada.cpp

HEADERS += \
    bubblesort.h \
    insertion.h \
    bi_bubblesort.h \
    quicksort.h \
    shell.h \
    selection.h \
    heapsort.h \
    binsort.h \
    radixsort.h \
    mergesort.h \
    nodo.h \
    listaenlazada.h
