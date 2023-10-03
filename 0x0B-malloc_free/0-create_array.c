#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of size and assigns char c
 * @size: An unsigned integer representing the size of the
 * array to be created.
 * @c:A character that will be used to fill the elements of the array.
 * Description: creates an array and assign char c to it
 * Return: Pointer to array or if the functions fails to allocate memory it
 * it returns NULL
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
