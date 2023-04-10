#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		/* check for substring match */
		while (*n == *h && *n != '\0')
		{
			n++;
			h++;
		}

		/* if the entire substring is found, return the pointer to its beginning */
		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	/* substring not found */
	return (NULL);
}
