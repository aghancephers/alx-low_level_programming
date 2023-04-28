#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: A pointer to the list_t list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}

	return (count);
}
