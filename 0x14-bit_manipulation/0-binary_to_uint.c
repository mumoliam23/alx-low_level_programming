#include "main.h"

/**
 * _atoi - Convert a character to an unsigned integer.
 * @c: The character to convert.
 *
 * Return: The converted integer.
 */
unsigned int _atoi(char c)
{
return ((unsigned int)c - '0');
}

/**
 * _strlen - Get the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(const char *str)
{
unsigned int index = 0;

while (str[index] != '\0')
index++;
return (index);
}

/**
 * binary_to_uint - Convert a binary number to an unsigned integer.
 * @b: A string that contains '0' and '1' characters.
 *
 * Return: The converted number, or 0 if @b contains a character
 * that is not '0' or '1', or if @b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
int index;
unsigned int result = 0, base2 = 1, num = 0;

/* Check if b is NULL and return 0 */
if (b == NULL)
return (0);

/* Iterate through the string */
for (index = _strlen(b) - 1; index >= 0; index--)
{
num = _atoi(b[index]); /* Convert the character to a number */

/* Check if the number is not 0 or 1 and return 0 */
if (num != 0 && num != 1)
return (0);

result += num *base2; /* Calculate the result */
base2 *= 2;
}

return (result);
}
