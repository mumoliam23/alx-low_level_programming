#include "main.h"

#define CHAR_BITS 8  /* Size of a char in bits */
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * print_binary - Prints the binary representation of a decimal value.
 *
 * @number: The decimal value to be printed in binary.
 */
void print_binary(unsigned long int number)
{
if (number >> 1)
print_binary(number >> 1);

putc((number & 1) ? '1' : '0', stdout);
}

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 *
 * @n: Pointer to the number.
 * @index: The index to set the bit to 1.
 *
 * Return: 1 if the operation is successful, or -1 if it fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1;

#ifdef DEBUG
unsigned long int n_before = *n;
#endif

    /* Check if the index is greater than the number of bits in n */
if (index >= INT_BITS)
return (-1);

mask <<= index; /* Create a mask based on the index position */
*n = (*n | mask);

#ifdef DEBUG
printf("\n%ld in binary is ", n_before);
print_binary(n_before);
printf(" while the mask right-shifted to index %d is ", index);
print_binary(mask);
printf(" our new value n in binary is ");
print_binary(*n);
printf("\n\n");
#endif

return (1);
}

