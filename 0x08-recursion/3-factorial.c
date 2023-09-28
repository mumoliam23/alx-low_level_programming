#include "main.h"
/**
 * factorial - returns the factorial of given integer n
 * @n: integer variable whose factorial is computed
 * Return: factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 1)
{
return (1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
