#include "main.h"
/**
 * _pow_recursion - raised the value of an integer to a given num
 * @x: integer value to be multiplied severally
 * @y: number of repeated multiplication
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
