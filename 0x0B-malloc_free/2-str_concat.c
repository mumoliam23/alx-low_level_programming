#include <stdlib.h>

/**
 * str_concat - a function that takes two input strings
 * and returns a pointer to the concatenated string
 * @s1: first input string
 * @s2: second input string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int len1 = 0;
int len2 = 0;
char *concat;
char *ptr;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
concat = malloc(sizeof(char) * (len1 + len2 + 1));

if (concat == NULL)
return (NULL);

ptr = concat;

while (*s1)
{
*ptr = *s1;
ptr++;
s1++;
}
while (*s2)
{
*ptr = *s2;
ptr++;
s2++;
}

*ptr = '\0';
return (concat);
}

