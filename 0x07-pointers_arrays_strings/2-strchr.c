#include "main.h"

/**
 * _strchr - locates a particular character in a string
 *
 * @s: pointer to string array
 * @c: locate character from the input array
 *
 * Return: first occurence of char, which is null if not found
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return ('\0');
}
