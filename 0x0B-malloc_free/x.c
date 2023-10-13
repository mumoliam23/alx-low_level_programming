#include "main.h"
#include <stdlib.h>
/**
 * alloc_grind - function designed to allocate memory for a
 * two dimension array.
 * @width: input width
 * @height: input height
 * Return: pointer to a two dimensional array
 */
int **alloc_grind(int width, int height)
{
int **a;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

a = (int **)malloc(height * sizeof(int *));

if (a == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
a[x] = (int *)malloc(width * sizeof(int));

if (a[x] == NULL)
{
while (x > 0)
free(a[--x]);
free(a);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
a[x][y] = 0;
}
return (a);
}

