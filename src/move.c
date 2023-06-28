#include <SDL2/SDL.h>

/* Camera position */
double cameraX = 0.0;
double cameraY = 0.0;

/* Camera movement speed */
double cameraSpeed = 0.1;

void handleInput(SDL_Event event)
{
	/* Handle keyboard events */
	if (event.type == SDL_KEYDOWN)
	{
		switch (event.key.keysym.sym)
		{
			case SDLK_UP:
				cameraY -= cameraSpeed;/* Move camera up */
				break;

			case SDLK_DOWN:
				cameraY += cameraSpeed;/* Move camera down */
				break;

			case SDLK_LEFT:
				cameraX -= cameraSpeed;/* Move camera left */
				break;

			case SDLK_RIGHT:
				cameraX += cameraSpeed;/* Move camera right */
				break;
		}
	}
}
