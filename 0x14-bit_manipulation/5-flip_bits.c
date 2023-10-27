/**
 * flip_bits - Count the number of bits that need to
 * be flipped to get from n to m.
 * @n: The initial unsigned long integer.
 * @m: The target unsigned long integer.
 *
 * Return: The number of bits that need to be be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int size;
unsigned int flipped = 0;

size = sizeof(n) * 8 - 1;

for (unsigned long int i = 0; i <= size; i++)
{
if ((n & 1) != (m & 1))
flipped++;

n = n >> 1;
m = m >> 1;
}
return (flipped);
}

