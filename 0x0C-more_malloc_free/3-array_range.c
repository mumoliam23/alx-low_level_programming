#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers containing a range of values
 * @min: the minimum value in the range (inclusive)
 * @max: the maximum value in the range (inclusive)
 *
 * This function dynamically allocates an array of integers and fills it with
 * values ranging from 'min' to 'max', inclusive. The caller is responsible
 * for freeing the memory allocated by this function.
 *
 * Return: pointer to the new array,
 *or NULL if allocation fails or 'min' is greater than 'max'.
 */
int *array_range(int min, int max)
{
int *pointer;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
pointer = malloc(sizeof(int) * size);
if (pointer == NULL)
return (NULL);

for (i = 0; min <= max; i++)
pointer[i] = min++;
return (pointer);
}

