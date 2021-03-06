#-------------------------------------------------
#
# Project created by QtCreator 2016-10-08T21:17:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CompanAIn
TEMPLATE = app

QMAKE_CXXFLAGS = -std=c++11

SOURCES += source/main.cpp\
        source/mainwindow.cpp \
    source/AI/AICore.cpp \
    source/AI/ResponseModule.cpp \
    source/AI/AINeuron.cpp \
    source/AI/AINeuralNet.cpp

HEADERS  += include/mainwindow.h \
    include/AI/AICore.h \
    include/AI/CAIModule.h \
    include/AI/CAIMemory.h \
    include/AI/ResponseModule.h \
    include/utils/CTriple.h \
    include/utils/stateutils.h \
    include/utils/CTuple.h \
    include/AI/AINeuron.h \
    include/AI/AINeuronLayer.h \
    include/AI/AINeuralNet.h

FORMS    += ui/mainwindow.ui

OTHER_FILES += \
    docs/CompanAIn-Main-Documentation.txt
