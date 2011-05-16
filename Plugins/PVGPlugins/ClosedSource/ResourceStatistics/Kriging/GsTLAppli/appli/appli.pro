######################################################################
# Automatically generated by qmake (1.07a) Sat Apr 22 23:42:45 2006
######################################################################

TEMPLATE = lib
INCLUDEPATH += .

# Input
HEADERS += common.h \
           library_appli_init.h \
           manager_repository.h \
           project.h \
           utilities.h
SOURCES += library_appli_init.cpp \
           manager_repository.cpp \
           project.cpp \
           utilities.cpp

TARGET=GsTLAppli_appli



contains( TEMPLATE, lib ) {
    DESTDIR = $$GSTLAPPLI_HOME/lib/$$CUR_PLATFORM
    OBJECTS_DIR = $$GSTLAPPLI_HOME/lib/$$CUR_PLATFORM/obj/appli
}
contains( TEMPLATE, app ) {
    DESTDIR += $$GSTLAPPLI_HOME/bin/$$CUR_PLATFORM
    OBJECTS_DIR = $$GSTLAPPLI_HOME/bin/$$CUR_PLATFORM/obj/appli
}


include( $$GSTLAPPLI_HOME/config.qmake )

exists( MMakefile ) {
   include( MMakefile )
}

