#include <stdio.h>

/**
 * main - Entry point
 * Description: print all aplhabet letters
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
