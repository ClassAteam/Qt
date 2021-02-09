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
    antiicing_lights.cpp \
    antiicing_mkam.cpp \
    antiicing_ppd.cpp \
    antiicing_windshields.cpp \
    brakes_1.cpp \
    brakes_2.cpp \
    brakes_3.cpp \
    brakes_4.cpp \
    brakes_5.cpp \
    brakes_6.cpp \
    brakes_int.cpp \
    cabinlighting_beacons.cpp \
    cabinlighting_inner.cpp \
    cabinlighting_navi.cpp \
    cabinlighting_outside.cpp \
    cabinlighting_solid.cpp \
    emergencyalarm_leftpilot.cpp \
    emergencyalarm_leftpilot_1.cpp \
    emergencyalarm_leftpilot_2.cpp \
    emergencyalarm_navigator.cpp \
    emergencyalarm_navigator_1.cpp \
    emergencyalarm_navigator_2.cpp \
    emergencyalarm_rightpilot.cpp \
    emergencyalarm_rightpilot_1.cpp \
    emergencyalarm_steersman.cpp \
    hydro_1.cpp \
    hydro_2.cpp \
    hydro_3.cpp \
    hydro_4.cpp \
    hydro_5.cpp \
    hydro_6.cpp \
    hydro_7.cpp \
    hydro_8.cpp \
    hydro_9.cpp \
    hydro_int.cpp \
    interfacing.cpp \
    landinggear_1.cpp \
    landinggear_2.cpp \
    landinggear_3.cpp \
    landinggear_4.cpp \
    landinggear_5.cpp \
    landinggear_6.cpp \
    landinggear_7.cpp \
    landinggear_8.cpp \
    landinggear_9.cpp \
    landinggear_int.cpp \
    main.cpp \
    mainwindow.cpp \
    powerdc_1.cpp \
    powerdc_11.cpp \
    powerdc_12.cpp \
    powerdc_13.cpp \
    powerdc_14.cpp \
    powerdc_15.cpp \
    powerdc_16.cpp \
    powerdc_17.cpp \
    powerdc_2_3.cpp \
    powerdc_4.cpp \
    powerdc_5_6.cpp \
    powerdc_7.cpp \
    powerdc_8.cpp \
    powerdc_9_10.cpp \
    powerdc_int.cpp \
    presure_regulation.cpp \
    wind_functions.cpp \
    wingsmech_1.cpp \
    wingsmech_2.cpp \
    wingsmech_3.cpp \
    wingsmech_4.cpp \
    wingsmech_int.cpp

HEADERS += \
    algorithms.h \
    antifirelogic_alarm.h \
    antifirelogic_execution_block.h \
    antifirelogic_valves.h \
    antiicing_airintake.h \
    antiicing_airintake_warmup.h \
    antiicing_lights.h \
    antiicing_mkam.h \
    antiicing_ppd.h \
    antiicing_windshields.h \
    brakes_1.h \
    brakes_2.h \
    brakes_3.h \
    brakes_4.h \
    brakes_5.h \
    brakes_6.h \
    brakes_int.h \
    cabinlighting_beacons.h \
    cabinlighting_inner.h \
    cabinlighting_navi.h \
    cabinlighting_outside.h \
    cabinlighting_solid.h \
    emergencyalarm_leftpilot.h \
    emergencyalarm_leftpilot_1.h \
    emergencyalarm_leftpilot_2.h \
    emergencyalarm_navigator.h \
    emergencyalarm_navigator_1.h \
    emergencyalarm_navigator_2.h \
    emergencyalarm_rightpilot.h \
    emergencyalarm_rightpilot_1.h \
    emergencyalarm_steersman.h \
    hydro_1.h \
    hydro_2.h \
    hydro_3.h \
    hydro_4.h \
    hydro_5.h \
    hydro_6.h \
    hydro_7.h \
    hydro_8.h \
    hydro_9.h \
    hydro_int.h \
    interfacing.h \
    landinggear_1.h \
    landinggear_2.h \
    landinggear_3.h \
    landinggear_4.h \
    landinggear_5.h \
    landinggear_6.h \
    landinggear_7.h \
    landinggear_8.h \
    landinggear_9.h \
    landinggear_int.h \
    main.h \
    mainwindow.h \
    powerdc_1.h \
    powerdc_11.h \
    powerdc_12.h \
    powerdc_13.h \
    powerdc_14.h \
    powerdc_15.h \
    powerdc_16.h \
    powerdc_17.h \
    powerdc_2_3.h \
    powerdc_4.h \
    powerdc_5_6.h \
    powerdc_7.h \
    powerdc_8.h \
    powerdc_9_10.h \
    powerdc_int.h \
    presure_regulation.h \
    wind_functions.h \
    wingsmech_1.h \
    wingsmech_2.h \
    wingsmech_3.h \
    wingsmech_4.h \
    wingsmech_int.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
