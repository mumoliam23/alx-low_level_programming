#include "lists.h"

/**
 * free_list - free single list link
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
	free(head->str);
	free(head);
}
