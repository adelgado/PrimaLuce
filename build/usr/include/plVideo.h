/*
** 
**  PrimaLuce Video 
** 
**  file: plVideo.h
**  created: 21-Feb-2012
**    
**  Copyright (C)2012 Vlad Paloş (vlad@palos.ro). All rights reserved!
** 
*/

#ifndef __PL_VIDEO_H__
#define __PL_VIDEO_H__

#define PL_VIDEO_OFF 0
#define PL_VIDEO_ON 1

#include <stdlib.h>
#include <lua.h>

#include <SDL/SDL.h>

#include "plSystem.h"
#include "plLog.h"

extern struct plVideo {

    int state;
    SDL_Surface *screen;
    

};

extern int plInitVideo();
extern int plDeinitVideo();

#endif
