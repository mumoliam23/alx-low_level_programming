#include<stdio.h>

/**
 * main - Entry
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: 0
*/

int main(void)
{
	int dig = 48;

	for (dig = 48; dig <= 102; dig++)
	{
		putchar(dig);

		if (dig == 57)
			dig += 39;
	}
	putchar('\n');

	return (0);
}
