#include "main.h"

/**
 * _strpbrk - Given a set of bytes, this function finds a string.
 *
 * @s: pointer to input string
 * @accept: pointer to string we
 *         searching for in @s
 * Return: pointer to the bytes in @s
 *         or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
int m, n;

m = 0;
while (s[m] != '\0')
{
n = 0;
while (accept[n] != '\0')
{
if (s[m] == accept[n])
return (s + m);
n++;
}
m++;
}
return ('\0');
}
