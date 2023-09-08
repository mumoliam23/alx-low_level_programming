#include<stdio.h>

/**
 * main - Entry
 *
 * Description: print 0, 1, - 9
 *
 * Return: 0
*/

int main(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
	{
		putchar(dig + 48);

		if (dig != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
