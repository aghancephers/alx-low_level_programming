#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a new string which is a duplicate of the
 * string str.
 * @str: Pointer to the string to be duplicated.
 *
 * Return: Pointer to the newly allocated space in memory, or NULL if str is
 * NULL or insufficient memory was available to complete the allocation.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i;

	if (str == NULL)
		return (NULL);

	/* find length of str */
	for (i = 0; str[i] != '\0'; i++)
		;

	/* allocate memory for duplicate string */
	dup_str = malloc(sizeof(char) * (i + 1));

	if (dup_str == NULL)
		return (NULL);

	/* copy characters to duplicate string */
	i = 0;
	do {
		dup_str[i] = str[i];
		i++;
	} while (str[i - 1] != '\0');

	return (dup_str);
}
