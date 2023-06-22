#include <SDL2/SDL.h>
#include "maze.h"

/**
 * inputHandler - function to store game instructions.
 * @e: variable to store user inputs.
 * Return: None
 */

void inputHandler(void)
{
	SDL_Event e;
	bool quit = false;

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
}
