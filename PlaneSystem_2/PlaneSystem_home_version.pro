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
    brakes_algorithm.cpp \
    brakes_balarm.cpp \
    brakes_modes.cpp \
    brakes_parachute.cpp \
    brakes_reserve.cpp \
    brakes_skid.cpp \
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
    hydro_pumpsrel.cpp \
    landinggear_carts.cpp \
    landinggear_nose.cpp \
    landinggear_position.cpp \
    landinggear_racks.cpp \
    landinggear_racks_rel.cpp \
    landinggear_relay.cpp \
    landinggear_sashes.cpp \
    landinggear_switches.cpp \
    landinggear_valves.cpp \
    main.cpp \
    mainwindow.cpp \
    presure_regulation.cpp \
    wingsmech_alarm.cpp \
    wingsmech_flaps.cpp \
    wingsmech_movingpart.cpp \
    wingsmech_underwings.cpp

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
    brakes_algorithm.h \
    brakes_balarm.h \
    brakes_modes.h \
    brakes_parachute.h \
    brakes_reserve.h \
    brakes_skid.h \
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
    hydro_pumpsrel.h \
    landinggear_carts.h \
    landinggear_nose.h \
    landinggear_position.h \
    landinggear_racks.h \
    landinggear_racks_rel.h \
    landinggear_relay.h \
    landinggear_sashes.h \
    landinggear_switches.h \
    landinggear_valves.h \
    main.h \
    mainwindow.h \
    presure_regulation.h \
    wingsmech_alarm.h \
    wingsmech_flaps.h \
    wingsmech_movingpart.h \
    wingsmech_underwings.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
