#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head node of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	char *str_dup;
	unsigned int len = 0;

	/* Calculate the length of the string */
	while (str && str[len])
		len++;

	/* Duplicate the string */
	str_dup = strdup(str);
	if (str_dup == NULL)
		return (NULL);

	/* Create a new node and set its values */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(str_dup);
		return (NULL);
	}

	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = NULL;

	/* If the list is empty, the new node becomes the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Find the last node and append the new node */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
