#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_elements, *temp;
	size_t str_len = 0;

	/*set strig length to 0 if its NULL*/
	if (str == NULL)
		str_len = 0;

	/*count length of string*/
	while (str[str_len] != '\0')
		str_len++;

	new_elements = malloc(sizeof(list_t));
	if (new_elements == NULL)
		return (NULL);

	new_elements->str = strdup(str);
	new_elements->len = str_len;
	new_elements->next = NULL;

	/*copy our starting elements pointer to temp*/
	temp = *head;

	/*if temp is NULL place our new_elements at the beginning of the list*/
	/*else if its not null we place our new_elements to temp->next hence*/
	/*adding our new_elements at the end of the list*/
	if (temp == NULL)
		*head = new_elements;
	else
	{
		/**
		  * we iterate pointer next addr if its not NULL our temp addr
		  * points to the next addr or the next elements.
		  */
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_elements;
	}

	return (*head);
}
