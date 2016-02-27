TEMPLATE = lib
DEPENDPATH += .
INCLUDEPATH += .
PDBEXT = .pdb

CONFIG(debug, debug|release) {
    DESTDIR = $$PWD/../plugins/script_debug
} else {
    DESTDIR = $$PWD/../plugins/script
}

win32:{
    QMAKE_CXXFLAGS += /MP /GS /Zi
    QMAKE_LFLAGS += /DEBUG /OPT:REF /OPT:ICF /PDB:"$$DESTDIR\$$TARGET$$PDBEXT"
}

QT += script
CONFIG += plugin release build_all
GENERATEDCPP = $$PWD/../generated_cpp
TARGET=$$qtLibraryTarget($$TARGET)
