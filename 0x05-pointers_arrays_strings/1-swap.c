#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *@a: input parameter 1
 *@b: input parameter 2
 *
 * Return: Nothing
 *
 */
void swap_int(int *a, int *b)
{
int marks;

marks = *a;
*a = *b;
*b = marks;
}
