#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created
 *  by alloc_grid function.
 * @grid: The grid to free.
 * @height: The height of the grid.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
