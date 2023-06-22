#ifndef _MAZE_H
#define _MAZE_H

/*including SDL HEADERS*/

#include <SDL2/SDL.h>

/*defining constants to hold the window size and map dimensions*/

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

#define MAP_WIDTH 8
#define MAP_HEIGHT 8
SDL_Window *createWindow(const char *title, int width, int height);
extern int map[MAP_WIDTH][MAP_HEIGHT];
void drawMap(void);
void handleEvents(void);
void inputHandler(void);
void renderScene(SDL_Renderer *renderer);
#endif
