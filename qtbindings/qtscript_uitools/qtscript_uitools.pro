TARGET = qtscript_uitools
include(../qtbindingsbase.pri)
CONFIG += uitools widgets
SOURCES += plugin.cpp
HEADERS += plugin.h
INCLUDEPATH += ./include/ ${QTDIR}/include/QtWidgets
include($$GENERATEDCPP/com_trolltech_qt_uitools/com_trolltech_qt_uitools.pri)
