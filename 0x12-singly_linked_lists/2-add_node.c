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
size_t str_len = 0;

if (str == NULL)
	str_len = 0;
while (str[str_len] != '\0')
	str_len++;
new_element = malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);
if (*head == NULL)
	new_element->next = NULL;
else
new_element->next = *head;
new_element->str = strdup(str);
new_element->len = str_len;
*head = new_element;
return (*head);
}
