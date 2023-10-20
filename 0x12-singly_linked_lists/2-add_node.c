#include "lists.h"

/**
 * add_node - function that add an element at the start of linked list
 * @head: points to the first node of the list
 * @str: String
 * Return: NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;

	unsigned int i, iterator = 0;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);
	new_element->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		iterator++;
	new_element->len = iterator;
	new_element->next = *head;
	*head = new_element;

	return (*head);

}
