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
    lib/emailaddress.cpp \
    lib/mimeattachment.cpp \
    lib/mimecontentformatter.cpp \
    lib/mimefile.cpp \
    lib/mimehtml.cpp \
    lib/mimeinlinefile.cpp \
    lib/mimemessage.cpp \
    lib/mimemultipart.cpp \
    lib/mimepart.cpp \
    lib/mimetext.cpp \
    lib/quotedprintable.cpp \
    lib/smtpclient.cpp \
    main.cpp \
    mainwindow.cpp \
    sendemail.cpp \
    tabwidgetsettings.cpp

HEADERS += \
    lib/SmtpMime \
    lib/emailaddress.h \
    lib/mimeattachment.h \
    lib/mimecontentformatter.h \
    lib/mimefile.h \
    lib/mimehtml.h \
    lib/mimeinlinefile.h \
    lib/mimemessage.h \
    lib/mimemultipart.h \
    lib/mimepart.h \
    lib/mimetext.h \
    lib/quotedprintable.h \
    lib/smtpclient.h \
    lib/smtpexports.h \
    mainwindow.h \
    sendemail.h \
    tabwidgetsettings.h

FORMS += \
    mainwindow.ui \
    sendemail.ui \
    tabwidgetsettings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
