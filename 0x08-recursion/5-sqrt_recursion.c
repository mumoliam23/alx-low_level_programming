#include "main.h"

/**
 * _sqrt_recursion - calculates square root of a number
 * @n: integer whose square root should be calculated
 *
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursive natural square root of a number
 * @n: integer whose square root should be calculated
 * @i: iterator
 *
 * Return: resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
