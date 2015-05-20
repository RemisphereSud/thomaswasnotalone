#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

typedef struct Input
{
	int left, right, jump, down, tab, enter, erase, pause;
} Input;

typedef struct Management
{
	SDL_Surface *screen;
} Management;