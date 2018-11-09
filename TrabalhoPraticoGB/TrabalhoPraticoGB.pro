#-------------------------------------------------
#
# Project created by QtCreator 2018-11-04T10:13:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TrabalhoPraticoGB
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
        calculadorarnp.cpp \
<<<<<<< HEAD
    calc.cpp \
    gerenciadorpilha.cpp

HEADERS += \
        calculadorarnp.h \
    calc.h \
    gerenciadorpilha.h
=======
<<<<<<< HEAD
    pilha.cpp

HEADERS += \
        calculadorarnp.h \
    pilha.h
=======
    calc.cpp

HEADERS += \
        calculadorarnp.h \
    calc.h
>>>>>>> 795ad541c62344bbecae7631716b696da5d42a25
>>>>>>> 2419c119db1dd12fea0a90942a9e8087e4bc3ad6

FORMS += \
        calculadorarnp.ui
