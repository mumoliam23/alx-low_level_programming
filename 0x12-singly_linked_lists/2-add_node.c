#include "lists.h"

/**
 * add_node - function that add an element at the start of linked list
 * @head: points to the first node of the list
 * @str: String
 * Return: NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *elements;
	size_t str_len = 0;

	/*set strig length to 0 if its NULL*/
	if (str == NULL)
		str_len = 0;

	/*count length of string*/
	while (str[str_len] != '\0')
		str_len++;

	elements = malloc(sizeof(list_t));
	if (elements == NULL)
		return (NULL);

	if (*head == NULL)
		elements->next = NULL;
	else
		elements->next = *head;

	elements->str = strdup(str);
	elements->len = str_len;
	*head = elements;

	return (*head);
}
