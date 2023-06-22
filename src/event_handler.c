#include <SDL2/SDL.h>
#include "maze.h"

/* void handleEvents - function to handle left and right movements. */
void handleEvents(void)
{
	SDL_Event event;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_QUIT:
				/* Handle quit event */
				break;

			case SDL_KEYDOWN:
				/* Handle key press event */
				if (event.key.keysym.sym == SDLK_LEFT)
				{
					/* Rotate camera left */

					cameraAngle -= 5.0;
				}
				else if (event.key.keysym.sym == SDLK_RIGHT)
				{
					/* Rotate camera right */

					cameraAngle += 5.0;
				}
				break;
				/* Handle other events as needed */
		}
	}
}
