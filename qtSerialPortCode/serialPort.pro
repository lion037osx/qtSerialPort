#-------------------------------------------------
#
# Project created by QtCreator 2014-10-31T19:24:24
#
#-------------------------------------------------



QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ESP8266SerialPort

TEMPLATE = app

VERSION = 5


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

include ("/home/optimus/Documentos/source_code/qt/qt_libs/qextserialport-1.2rc/src/qextserialport.pri")

!host_build:QMAKE_MAC_SDK = macosx


#ICON = icon.icns#__MAC__

ICON = "esp8266serialport512x512.ico"#__LINUX__

#RC_ICONS =  icon.ico#__WIN__





