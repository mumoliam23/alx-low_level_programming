#include "main.h"
/**
 * _puts_recursion - prints a string, one character at a time
 * @s: pointer to the string to be printed
 * Return: no return value
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}

