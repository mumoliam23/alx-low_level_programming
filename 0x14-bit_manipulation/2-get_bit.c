#include "main.h"

#define CHAR_BITS 8 /* Number of bits in a char */
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * print_binary - Print the binary representation of a decimal number.
 *
 * @number: The decimal value to be converted and printed in binary.
 */
void print_binary(unsigned long int number)
{
    if (number >> 1)
        print_binary(number >> 1);

    putc((number & 1) ? '1' : '0', stdout);
}
/**
 * get_bit - Get the value of a bit at a given index in a decimal number.
 *
 * @n: The decimal value.
 * @index: The position of the bit to retrieve from @n.
 *
 * Return: The value of the bit at the specified index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int bit;

    /* Check if the index is greater than the number of bits in n */
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    #ifdef DEBUG
    printf("\n[%ld >> %d] is %ld.\n", n, index, (n >> index));
    printf("%ld in binary: ", n);
    print_binary(n);
    printf("\n[%ld >> %d] in binary: ", n, index);
    print_binary(n >> index);
    printf(" <- The last bit is the bit at index %d\n\n", index);
    #endif

    /* Shift n right by index and bitwise AND with 1 to find the bit */
    bit = ((n >> index) & 1);

    return (bit);
}
