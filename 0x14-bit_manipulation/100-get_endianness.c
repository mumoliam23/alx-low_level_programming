/**
 * check_endianness - Determine if the architecture is
 * little-endian or big-endian.
 *
 * Return: 1 for little-endian, 0 for big-endian.
 */
int check_endianness(void)
{
unsigned int num = 1;
char *byte_ptr = (char *) &num;
return (byte_ptr[0] == 1);
}

