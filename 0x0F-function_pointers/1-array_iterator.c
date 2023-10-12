#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterate through array in a systematic manner
 * @array: array element
 * @size: the size of arrays
 * @action: pointer parameter
 * Description: array_iterator applies a given operation to each element
 * of the integer array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}

}
