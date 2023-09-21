#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
int e, f;/*Two counters*/

e = 0;

while (dest[e] != '\0')
{
e++;
}
f = 0;

while (src[f] != '\0')
{
dest[e] = src[f];
e++;
f++;
}
dest[e] = '\0';

return (dest);
}
