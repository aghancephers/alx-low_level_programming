#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 *
 * This function takes a pointer to a struct dog and frees the memory
 * allocated to its name, owner, and the struct itself.
 */
void free_dog(dog_t *d)
{
	// Check if d is not NULL
	if (d != NULL)
	{
		// Free memory allocated to name and owner
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		
		// Free memory allocated to the struct itself
		free(d);
	}
}
