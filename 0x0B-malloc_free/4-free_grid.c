#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2D grid
 * @grid: The 2D grid to free
 * @height: The height dimension of the grid
 *
 * Description: This function frees the memory allocated for the grid.
 * It iterates over each row of the grid and frees the memory for each row,
 * and then frees the memory for the grid itself.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
