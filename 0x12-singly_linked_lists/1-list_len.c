#include "lists.h"

/**
 * list_len - get number of elements/nodes
 * @h: first node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t elements = 1;

if (h == NULL)
return (0);

while (h->next != NULL)
{
	h = h->next;
	elements++;
}
return (elements);
}
