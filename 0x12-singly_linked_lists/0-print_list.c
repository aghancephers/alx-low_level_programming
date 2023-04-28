#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head node of the list.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	/* Traverse the linked list and print each node's data */
	for (; h; h = h->next, node_count++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}

	return (node_count);
}
