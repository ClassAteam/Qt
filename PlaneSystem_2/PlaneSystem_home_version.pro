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
    hydro_3rdsystem.cpp \
    hydro_4systems.cpp \
    hydro_alarm.cpp \
    hydro_consumers.cpp \
    hydro_hvalves.cpp \
    hydro_pumping.cpp \
    hydro_pumpsrel.cpp \
    hydro_tempr.cpp \
    hydro_warmalarm.cpp \
    interfacing.cpp \
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
    powerdc_1.cpp \
    powerdc_11.cpp \
    powerdc_12.cpp \
    powerdc_13.cpp \
    powerdc_14.cpp \
    powerdc_15.cpp \
    powerdc_16.cpp \
    powerdc_2_3.cpp \
    powerdc_4.cpp \
    powerdc_5_6.cpp \
    powerdc_7.cpp \
    powerdc_8.cpp \
    powerdc_9_10.cpp \
    powerdc_int.cpp \
    presure_regulation.cpp \
    wind_functions.cpp \
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
    hydro_3rdsystem.h \
    hydro_4systems.h \
    hydro_alarm.h \
    hydro_consumers.h \
    hydro_hvalves.h \
    hydro_pumping.h \
    hydro_pumpsrel.h \
    hydro_tempr.h \
    hydro_warmalarm.h \
    interfacing.h \
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
    powerdc_1.h \
    powerdc_11.h \
    powerdc_12.h \
    powerdc_13.h \
    powerdc_14.h \
    powerdc_15.h \
    powerdc_16.h \
    powerdc_2_3.h \
    powerdc_4.h \
    powerdc_5_6.h \
    powerdc_7.h \
    powerdc_8.h \
    powerdc_9_10.h \
    powerdc_int.h \
    presure_regulation.h \
    wind_functions.h \
    wingsmech_alarm.h \
    wingsmech_flaps.h \
    wingsmech_movingpart.h \
    wingsmech_underwings.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
