######################################################################
# Automatically generated by qmake (1.02a) Thu Jun 6 18:43:39 2002
######################################################################

TEMPLATE = app
CONFIG -= moc

# Input
SOURCES += test_manager.cpp

TARGET=utils2



contains( TEMPLATE, lib ) {
    DESTDIR = $$GSTLAPPLI_HOME/lib/$$CUR_PLATFORM
    OBJECTS_DIR = $$GSTLAPPLI_HOME/lib/$$CUR_PLATFORM/obj/tests/utils2
}
contains( TEMPLATE, app ) {
    DESTDIR += $$GSTLAPPLI_HOME/bin/$$CUR_PLATFORM
    OBJECTS_DIR = $$GSTLAPPLI_HOME/bin/$$CUR_PLATFORM/obj/tests/utils2
}


include( $$GSTLAPPLI_HOME/config.qmake )

exists( MMakefile ) {
   include( MMakefile )
}

