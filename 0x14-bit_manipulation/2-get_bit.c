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
