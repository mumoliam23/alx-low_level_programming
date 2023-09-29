#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer where we will copy to
 * @src: what we are to copy
 * @n: n bytes of @src
 *
 * Return: Always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int q;

for (q = 0; q < n; q++)
dest[q] = src[q];
return (dest);
}
