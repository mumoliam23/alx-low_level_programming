#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @pointer: Pointer to the memory block to be reallocated.
 * @old_size: The size of the previously allocated memory block.
 * @new_size: The new size for the reallocated memory block.
 *
 * Return: Pointer to the newly allocated memory block, or NULL on failure.
 */
void *_realloc(void *pointer, unsigned int old_size, unsigned int new_size)
{
char *new_pointer;
char *old_pointer;
unsigned int i;
if (new_size == old_size)
return (pointer);
if (new_size == 0 && pointer)
{
free(pointer);
return (NULL);
}
if (!pointer)
return (malloc(new_size));
new_pointer = malloc(new_size);
if (!new_pointer)
return (NULL);
old_pointer = pointer;
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
new_pointer[i] = old_pointer[i];
}
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
new_pointer[i] = old_pointer[i];
}
free(pointer);
return (new_pointer);
}

