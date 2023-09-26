#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: character value
*/
char *_strstr(char *haystack, char *needle)
{
int k = 0, l = 0;
while (haystack[k])
{
while (needle[l])
{
if (haystack[k + l] != needle[l])
{
break;
}
l++;
}
if (needle[l] == '\0')
{
return (haystack + k);
}

l++;
}

return ('\0');
}
