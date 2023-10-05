#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - funtion will allocate memory using malloc
 * @b: memory to be allocated in bytes
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *pointer;
pointer = malloc(b);
if (pointer == NULL)
{
exit(98);
}
return (pointer);
}
