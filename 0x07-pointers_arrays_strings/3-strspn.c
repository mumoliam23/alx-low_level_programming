#include "main.h"

/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int j = 0, k, l = 0;
while (accept[j])
{
k = 0;
while (s[k] != 32)
{
if (accept[j] == s[k])
{
l++;
}
k++;
}
j++;
}
return (l);
}
