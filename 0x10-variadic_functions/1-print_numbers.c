#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print a series of numbers, separated by a specified string,
 * followed by a new line.
 * This function takes a variable number of integers
 *and prints them to the standard output, separating them
 * using the provided separator string, and ending with a new line.
 * @separator: The string to be printed between the numbers.
 * @n: The number of integers to be printed.
 * @...: A variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;

va_start(nums, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(nums);
}

