#include "main.h"

/**
 * print_triangle - prints triangle using _putchar
 *
 * @size: size of triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
int x, y;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 1 ; x <= size ; ++x)
{
for (y = 1 ; y <= size ; ++y)
{
if ((y + x) <= size)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
