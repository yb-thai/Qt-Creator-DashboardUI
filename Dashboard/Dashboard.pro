QT       += core gui network

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
    httpmanager.cpp \
    main.cpp \
    mainwindow.cpp \
    todolistmodel.cpp

HEADERS += \
    httpmanager.h \
    mainwindow.h \
    todolistmodel.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    images/japan1.jpg \
    images/japan2.jpg \
    images/japan3.jpeg \
    images/japan4.jpg \
    images/japan5.jpeg \
    images/japan6.jpg \
    images/london1.jpg \
    images/london2.jpg \
    images/london3.jpg \
    images/london4.jpg \
    images/london5.jpg \
    images/london6.jpg \
    images/seattle1.jpg \
    images/seattle2.jpg \
    images/seattle3.jpg \
    images/seattle4.jpg \
    images/seattle5.jpg \
    images/seattle6.jpg \
    images/seattle7.jpg

RESOURCES += \
    images.qrc
