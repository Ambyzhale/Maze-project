#include <SDL2/SDL.h>
#include <stdio>
#include "maze.h"
/*
 * main - always the entry point..
 * @argc: the command line arguments list.
 * @args: the array of arguments.
 * Return: 0.
 */

int main(int argc, char *args[])
{
	SDL_Window *window = NULL;/*the window to render to */

	SDL_Surface *screenSurface = NULL;/* window's surface */

	if (SDL_Init(SDL_INIT_VIDEO) < 0)/* initialize SDL */
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}

	SDL_Window *createWindow(const char *title,
			int width, int height);/*create window*/

	screenSurface = SDL_GetWindowSurface(window);/* get window's surface */

	int map[MAP_WIDTH][MAP_HEIGHT];

	drawMap();/*draw map*/

	SDL_FillRect(screenSurface, NULL,
			SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));/*fill surface*/

	SDL_UpdateWindowSurface(window);/*update the surface*/

	SDL_Event e; /*hack to stay up the window*/
	bool quit = false;
	while (running)
	{
		 handleEvents();

		 render();
	}

	while (quit == false)
	{
		while (SDL_PollEvent(&e))
		{
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}
		}
	}

	SDL_DestroyWindow(window);/*destroy window*/

	SDL_Quit();/*quit SDL subsystems*/

	return (0);
}
