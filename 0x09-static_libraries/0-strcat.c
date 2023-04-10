#include "main.h"

/**
*_strcat - concatenates two strings
*@dest: the string to append to
*@src: the string to append
*
*Return: a pointer to the concatenated string
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

/* find the end of the destination string */
while (dest[i] != '\0')
i++;

/* append the source string to the destination string */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
