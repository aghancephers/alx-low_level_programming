#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination array where the content is to be copied.
 * @src: Pointer to the source of data to be copied.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
