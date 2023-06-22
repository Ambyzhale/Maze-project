#include <SDL2/SDL.h>
#include "maze.h"

/*
 * drawMap - function for mapping.
 * @map: map array.
 * @i: variable for mapping the width.
 * @j: variable for mapping the height.
 * Return: None.
 */

void drawMap(void)
{
	int map[MAP_WIDTH][MAP_HEIGHT];

	for (int i = 0; i < MAP_WIDTH; i++)
	{
		for (int j = 0; j < MAP_HEIGHT; j++)
		{
			SDL_Rect rect = {i * TILE_SIZE, j * TILE_SIZE, TILE_SIZE, TILE_SIZE};

			if (map[j][i] == 1)
			{
				/*wall color: red */
				SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
			}
			else
			{
				/*ceiling/ground color: green */
				SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
			}

			SDL_RenderFillRect(renderer, &rect);
		}
	}
}
