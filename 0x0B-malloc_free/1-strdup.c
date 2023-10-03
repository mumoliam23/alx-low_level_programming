#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function duplicating a given string
 * @ptr: pointer to a character
 * Description: a function that returns a pointer to a newly
 * allocated space in memory
 * Return: a pointer to a character
 */
char *_strdup(char *ptr)
{
char *duplicate;
int i, length = 0;

if (ptr == NULL)
return (NULL);

while (ptr[length] != '\0')
length++;

duplicate = (char *)malloc(sizeof(char) * (length + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; i <= length; i++)
duplicate[i] = ptr[i];
return (duplicate);
}
