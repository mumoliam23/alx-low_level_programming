#include "search_algos.h"
/**
 * binary_search - uses binary search to find value in array of ints
 * @array: the array of integers to search through, sorted in ascending order
 * @size: the size of the array of ints
 * @value: the int value searching for
 *
 * Return: the index in the array where match to value is or -1 if failed
 */

int binary_search(int *array, size_t size, int value)
{
	int mid = ((size - 1) / 2), result = 0;
	size_t itr = 0;

	if (array == NULL || size < 1)
		return (-1);

	printf("Searching in array: ");
	for (itr = 0; itr < size; itr++)
	{
		printf("%d", array[itr]);
		if (itr != (size - 1))
			printf(", ");
		else
			printf("\n");
	}

	if (array[mid] == value)
		return (mid);
	else if (size <= 1)
		return (-1);

	if (array[mid] > value)
	{
		return (binary_search(array, mid, value));
	}
	if (array[mid] < value)
	{
		mid += 1;
		result = binary_search(&array[mid], size - mid, value);
		if (result == -1)
			return (-1);
		return (mid + result);
	}
	return (-1);
}
