#include "main.h"
/**
 * is_prime_number - determines if a given int is a prime no or not
 * @n: integer variable
 * Return: returns an integer value
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n <= 3)
{
return (1);
}
if (n % 2 == 0 || n % 3 == 0)
{
return (0);
}
return (is_prime_number(n, 5));
}
