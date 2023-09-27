#include "main.h"
/**
 * _strlen_recursion - calculated legnth of string using recursion
 * @s: pointer to the characters to be counted
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
