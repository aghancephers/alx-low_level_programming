#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1 = 0, len2 = 0;

	/* Get length of s1 and s2 */
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	/* Allocate memory for concatenated string */
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	/* Copy s1 to s */
	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	/* Concatenate n bytes from s2 to s */
	for (j = 0; n < len2 && i < (len1 + n); j++, i++)
		s[i] = s2[j];

	/* Concatenate remaining bytes from s2 to s */
	for (j = 0; n >= len2 && i < (len1 + len2); j++, i++)
		s[i] = s2[j];

	s[i] = '\0';

	return (s);
}
