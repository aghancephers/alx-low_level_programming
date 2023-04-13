#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and checks for errors
 *
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 *         exits with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		/* Memory allocation failed */
		exit(98);
	}
	else
	{
		/* Memory allocation successful */
		return (ptr);
	}
}
