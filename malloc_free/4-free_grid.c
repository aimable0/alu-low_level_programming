#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D-array
 * @grid: two dimensional array
 * @height: rows
 *
 * Returns void Always
 */
void free_grid(int **grid, int height)
{
int i = 0;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
