#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
char c = s[i];

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
char base = (c >= 'A' && c <= 'Z') ? 'A' : 'a';
s[i] = (c - base + 13) % 26 + base;
}
}

return (s);
}
