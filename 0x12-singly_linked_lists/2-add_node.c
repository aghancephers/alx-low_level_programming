#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: The string to be added in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	/* Calculate the length of the new string */
	for (len = 0; str[len]; len++)
		;

	/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	/* Initialize the new node */
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);

	/* Update the head pointer to point to the new node */
	(*head) = new;

	return (*head);
}
