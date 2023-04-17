#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Description: This function initializes a struct dog variable with the
 * specified values for name, age, and owner. If the pointer to struct dog is
 * NULL, the function allocates memory for a new struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if pointer to struct dog is NULL */
	if (d == NULL)
	{
		/* Allocate memory for a new struct dog */
		d = malloc(sizeof(struct dog));

		/* Check if allocation was successful */
		if (d == NULL)
			return;
	}

	/* Set values for name, age, and owner */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
