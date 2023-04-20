#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - applies function to each element in the array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to apply on each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	/* Check for NULL pointer arguments */
	if (array == NULL || action == NULL)
		return;

	/* Apply function on each element of the array using while loop */
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
