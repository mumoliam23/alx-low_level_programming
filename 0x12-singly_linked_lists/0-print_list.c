#include "lists.h"
/**
 * print_list - prints elements of list name list_t
 * @h: singly linked list
 * Return: Number of elements
 */
size_t print_list(const list_t *h)
{
size_t elements;

elements = 0;

while (h != NULL)
{
	if (h->str == NULL)
		printf("[%d] %s \n", 0, "(nill)");
	else
		printf("[%d] %s \n", h->len, h->str);
	h = h->next;
	elements++;
}
return (elements);
}
