TARGET = SDLOpenGL

OBJECTS_DIR = obj

SOURCES += $$PWD/src/main.cpp \
           $$PWD/src/SDL_OpenGL.cpp

HEADERS += $$PWD/include/SDL_OpenGL.h

include($(HOME)/NGL/UseNGL.pri)
