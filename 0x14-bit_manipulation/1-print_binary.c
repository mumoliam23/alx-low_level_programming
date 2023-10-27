#include <stdio.h>

/**
 * print_binary - Prints a decimal number in binary format.
 * @n: The unsigned long integer to convert to binary and print.
 */
void print_binary(unsigned long int n)
{
	unsigned long int size;
	char c;
	int flag;
	/* Calculate the number of bits required to represent n */
	size = sizeof(n) * 8 - 1;
	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	flag = 0;
	/* Iterate through the bits in n, starting from the most significant bit */
	while (size > 0)
	{
		/* Extract the current bit (0 or 1) */
		c = (n >> size) & 1;
		/* Check if we have encountered the first '1' */
		if (flag == 1)
			putchar(c + '0');
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				flag = 1;
			}
		}

		size -= 1;
	}
}

