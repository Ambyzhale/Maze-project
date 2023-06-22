#include "maze.h"

/* createWindow - function to create window */
SDL_Window *createWindow(const char *title, int width, int height)
{
	SDL_Window *window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);

	if (window == NULL)
	{
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());

		return (NULL);
	}

	return (window);
}
