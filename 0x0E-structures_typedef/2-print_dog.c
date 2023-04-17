#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the name, age, and owner of a dog struct
 * @d: pointer to the dog struct to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	/* if pointer to dog struct is null, exit function */
	if (d == NULL)
		return;

	/* if dog's name is null, print (nil) */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* print dog's age */
	printf("Age: %f\n", d->age);

	/* if dog's owner is null, print (nil) */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
