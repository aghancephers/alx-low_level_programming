#include "main.h"
/**
*_strncpy - Copies up to n characters from the source string into the
*destination string. If the end of the source string is reached before n
*characters are copied, remaining characters are filled with null bytes.
*@dest: Pointer to destination string
*@src: Pointer to source string
*@n: Maximum number of characters to copy
*Return: Pointer to destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
