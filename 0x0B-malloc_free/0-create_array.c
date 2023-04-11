#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size `size` and initialize all elements with char `c`
 * @size: size of the array to be created
 * @c: char to initialize the array elements with
 *
 * Description: Allocates memory for an array of `size` bytes using `malloc`.
 *             If `size` is 0 or `malloc` fails to allocate memory, returns `NULL`.
 *             Initializes each element of the array with the char `c`.
 *
 * Return: pointer to the created array, `NULL` on failure
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;
	do {
		str[i] = c;
		i++;
	} while (i < size);

	return (str);
}
