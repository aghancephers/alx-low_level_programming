#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocate memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	/* If new size is equal to old size, return the original pointer */
	if (new_size == old_size)
		return (ptr);

	/* If new size is zero and ptr is not NULL, free the memory and return NULL */
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, simply allocate memory of new size */
	if (!ptr)
		return (malloc(new_size));

	/* Allocate memory of new size and check if successful */
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	/* Cast pointers to char to perform byte-by-byte copy */
	old_ptr = ptr;

	/* Copy elements from old_ptr to new_ptr */
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = old_ptr[i];

	/* Free old memory */
	free(ptr);

	/* Return pointer to newly allocated memory */
	return (new_ptr);
}

