#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings into a new string
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;

	conct = malloc(sizeof(char) * (i + j + 1));

	if (conct == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		conct[i] = s1[i];

	for (j = 0; s2[j]; j++)
		conct[i + j] = s2[j];

	conct[i + j] = '\0';

	return (conct);
}
