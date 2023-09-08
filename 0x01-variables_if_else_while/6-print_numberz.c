#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 * while using int variable
 *
 * Return: 0
*/

int main(void)
{
	int dig = 0;

	for (dig = 0; dig <= 9; dig++)
		/*convert digit to ASCII representation*/
		putchar(dig + '0');

	putchar('\n');

	return (0);
}
