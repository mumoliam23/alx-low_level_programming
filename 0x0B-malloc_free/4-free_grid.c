#include <stdlib.h>
/**
 * free_grid - releases memory allocated for two dimensional grid
 * @grid: pointer to a pointer
 * @height: number of rows in the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return;
}
for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
{
free(grid[i]);
}
}
free(grid);
}
