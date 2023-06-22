#ifndef _MAZE_H
#define _MAZE_H

/*including SDL HEADERS*/

#include <SDL2/SDL.h>

/*defining constants to hold the window size and map dimensions*/

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

#define MAP_WIDTH 8
#define MAP_HEIGHT 8

/*declearing an arry or characters to represent my map elements ie; walls,ground and ceiling*/

 int map[MAP_WIDTH][MAP_HEIGHT] = {                                                                                              {1, 1, 1, 1, 1, 1, 1, 1},                                                                                               {1, 0, 0, 0, 0, 0, 0, 1},                                                                                               {1, 0, 1, 1, 0, 1, 0, 1},                                                                                               {1, 0, 1, 0, 0, 1, 0, 1},                                                                                               {1, 0, 1, 0, 1, 0, 0, 1},                                                                                               {1, 0, 0, 0, 0, 0, 0, 1},                                                                                               {1, 1, 1, 1, 1, 1, 1, 1},                                                                                       };                                                                                                                      double playerX = 3.5;                                                                                                   double playerY = 4.5;                                                                                                   double playerAngle = 0.0;  
