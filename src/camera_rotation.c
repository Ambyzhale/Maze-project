#include <SDL2/SDL.h>

void renderScene(SDL_Renderer *renderer)
{
	/* Clear the screen */
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);

	SDL_RenderClear(renderer);

	/* Apply camera rotation */
	SDL_RenderSetScale(renderer, 1.0, 0.5);
	SDL_RenderSetViewport(renderer, NULL);
	SDL_RenderSetLogicalSize(renderer, windowWidth, windowHeight);
	SDL_RenderSetRotation(renderer, cameraAngle);

	/* Render the map */
	renderMap(renderer);

	/* Present the rendered scene */
	SDL_RenderPresent(renderer);
}
