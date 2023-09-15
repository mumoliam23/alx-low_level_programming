#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *      should be printed
*/

void print_diagonal(int n)
{
int p, s;

if (n <= 0)
_putchar('\n');
else
{
for (p = 0; p < n; p++)
{
for (s = 0; s < p; s++)
{
_putchar(32);
}

_putchar(92);
_putchar('\n');
}
}
}
