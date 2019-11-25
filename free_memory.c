#include "functions.h"

/**
* free_grid - funtion frees a 2 dimensional grid
* @grid : double pointer in
* @height : variable in
*/

void free_memory(char **grid)
{
	int i = 0;

	while (grid[i])
	{
		free(grid[i]);
	}
		free(grid);
}
