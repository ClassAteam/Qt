QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    algorithms.cpp \
    antifirelogic_alarm.cpp \
    antifirelogic_execution_block.cpp \
    antifirelogic_valves.cpp \
    antiicing_airintake.cpp \
    antiicing_airintake_warmup.cpp \
    antiicing_mkam.cpp \
    main.cpp \
    mainwindow.cpp \
    presure_regulation.cpp

HEADERS += \
    algorithms.h \
    antifirelogic_alarm.h \
    antifirelogic_execution_block.h \
    antifirelogic_valves.h \
    antiicing_airintake.h \
    antiicing_airintake_warmup.h \
    antiicing_mkam.h \
    main.h \
    mainwindow.h \
    presure_regulation.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
