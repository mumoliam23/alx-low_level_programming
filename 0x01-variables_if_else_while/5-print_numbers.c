#include<stdio.h>

/**
 * main-Entry
 *
 * Description:program prints single digit numbers of base 10 starting from 0
 *
 * Return: 0
*/

int main(void)
{
	int dig;

	for (dig = 0; dig <= 9 ; dig++)
	{
		printf("%d", dig);
	}
	printf("\n");

	return (0);
}
