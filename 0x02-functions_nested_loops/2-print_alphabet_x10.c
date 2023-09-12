#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times.
 *
 * Description: This function prints the lowercase alphabet 10 times,
 * each on a new line.
 */
void print_alphabet_x10(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}

