#include "lists.h"

/**
 * print_list - prints elements of list name list_t
 * @h: singly linked list
 * Return: Number of elements
 */

size_t print_list(const list_t *h)
{
	size_t elements = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		elements += 1;
	}

	printf("[%d] %s\n", h->len, h->str);

	return (elements);
}
