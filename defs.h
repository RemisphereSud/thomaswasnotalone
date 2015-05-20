#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define SCREEN_WIDTH 640
#define SCREEN_WIDTH 480

typedef struct Input
{
	int left, right, up, down, tab, enter, erase, pause;
}

typedef struct Management
{
	SDL_Surface *screen;
}