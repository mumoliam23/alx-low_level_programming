#include "lists.h"

/**
 * list_len - get number of elements
 * @h: first element
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 1;

	/*if head is null return 0 elements*/
	if (h == NULL)
		return (0);

	/*iterate through the elements*/
	while (h->next != NULL)
	{
		/*go to the next element*/
		h = h->next;
		/*count element*/
		elements++;
	}

	return (elements);
}
