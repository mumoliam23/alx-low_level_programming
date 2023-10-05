#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills memory with a specified byte value.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte value to copy.
 * @n: Number of bytes to fill with the value 'b'.
 *
 * Return: Pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
 * _calloc - Allocates memory for an array of elements.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory for the array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointer;
if (nmemb == 0 || size == 0)
return (NULL);

pointer = malloc(size * nmemb);

if (pointer == NULL)
return (NULL);

_memset(pointer, 0, nmemb * size);

return (pointer);
}

