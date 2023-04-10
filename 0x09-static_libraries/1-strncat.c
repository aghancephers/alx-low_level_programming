#include "main.h"

/**
*_strncat - concatenates two strings, using at most n bytes from src
*@dest: pointer to the destination string
*@src: pointer to the source string
*@n: maximum number of bytes to be used from src
*
*Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

/* Find the end of the dest string */
while (dest[i] != '\0')
{
i++;
}

/* Append the first n characters of src to dest */
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* Null-terminate the resulting string */
dest[i] = '\0';

return (dest);
}
