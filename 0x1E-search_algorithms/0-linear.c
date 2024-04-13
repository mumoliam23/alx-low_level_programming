#include "search_algos.h"

/**
 * Linear_search - Find for a value in an array of
 * Integers using the linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	/** Check if array is null and return -1 */
	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		if (array[i] == value)
		{
			return i; /** Return the index if value is found */
		}
	}
	/** If the value is not found, return -1 */
	return -1;
}
