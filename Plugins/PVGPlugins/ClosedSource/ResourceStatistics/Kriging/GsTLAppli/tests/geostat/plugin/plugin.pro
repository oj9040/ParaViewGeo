######################################################################
# Automatically generated by qmake (1.03a) Tue Feb 18 01:09:01 2003
######################################################################

TEMPLATE = lib

# Input
HEADERS += moving_average.h
SOURCES += moving_average.cpp

TARGET=GsTLAppli_plugin



contains( TEMPLATE, lib ) {
    DESTDIR = $$GSTLAPPLI_HOME/lib/$$CUR_PLATFORM
    OBJECTS_DIR = $$GSTLAPPLI_HOME/lib/$$CUR_PLATFORM/obj/tests/geostat/plugin
}
contains( TEMPLATE, app ) {
    DESTDIR += $$GSTLAPPLI_HOME/bin/$$CUR_PLATFORM
    OBJECTS_DIR = $$GSTLAPPLI_HOME/bin/$$CUR_PLATFORM/obj/tests/geostat/plugin
}


include( $$GSTLAPPLI_HOME/config.qmake )

exists( MMakefile ) {
   include( MMakefile )
}

