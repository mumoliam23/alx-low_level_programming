#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates up to 'n' bytes of one string to another string.
 * @s1: The destination string.
 * @s2: string to concatenate from
 * @n: The source string to be concatenated.
 *
 * Return: If memory allocation fails, it returns NULL; otherwise, it returns a
 * pointer to the newly created concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, len1, len2, total_length;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (len1 = 0; s1[len1] != '\0'; len1++)
;
for (len2 = 0; s2[len2] != '\0'; len2++)
;
total_length = len1 + (n < len2 ? n : len2);
s = malloc(sizeof(char) * (total_length + 1));

if (s == NULL)
return (NULL);

for (i = 0; i < len1; i++)
s[i] = s1[i];

for (j = 0; j < n && s2[j] != '\0'; j++)
s[i++] = s2[j];

s[i] = '\0';

return (s);
}
