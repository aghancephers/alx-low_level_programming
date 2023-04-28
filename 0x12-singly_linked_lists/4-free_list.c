#include <stdlib.h>
#include "lists.h"


/**
 * free_list - frees a linked list
 * @head: pointer to the list_t list to be freed
 *
 * Description: This function frees each node in a linked list starting from
 * the head until the end of the list is reached.
 */

void free_list(list_t *head)
{
	list_t *current;

	for (current = head; current != NULL; current = current->next)
	{
		free(current->str);
		free(current);
	}
}
