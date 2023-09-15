#include "main.h"

/**
 * print_numbers - from 0 to 9.
 *       use _putchar twice in your code
 *
 * Return: Always 0.
*/

void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
_putchar(i + 48);
}

_putchar('\n');
}
