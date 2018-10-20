#-------------------------------------------------
#
# Project created by QtCreator 2018-10-13T21:24:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = InstaWorkstation
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# DEFINES += WIDGETS_DEBUG_COLOR

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    CustomControls/toolpushbutton.cpp \
    ToolBar/tabbedtoolbar.cpp \
    ToolBar/gridtoolbar.cpp \
    ToolBar/viewingtoolsbar.cpp

HEADERS += \
        mainwindow.h \
    CustomControls/toolpushbutton.h \
    ToolBar/tabbedtoolbar.h \
    ToolBar/gridtoolbar.h \
    ToolBar/viewingtoolsbar.h

#FORMS += \
#        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    icons.qrc \
    styles.qrc
