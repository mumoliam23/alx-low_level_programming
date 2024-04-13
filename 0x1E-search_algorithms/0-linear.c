#include "search_algos.h"

/**
 * linear_search - This search algo iterates linearly through an array
 * @array: This is a pointer to the first element of an array
 * @size: This is the size of the array
 * @value: This is the value that is to be searched in an array
 * Return: the index of the the first occurence of value in the array
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int itr;

	if (array == NULL)
		return (-1);
	for (itr = 0; itr < size; itr++)
	{
		printf("Value checked array[%d] = [%d]\n", itr, array[itr]);
		if (array[itr] == value)
			return (itr);
	}
	/*Returns negative one as defualt if no value is found*/
	return (-1);
}
