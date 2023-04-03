#include "main.h"

/**
*_strpbrk - Searches a string for any of a set of bytes
*
*@s: The string to be searched
*@accept: The set of bytes to be searched for
*
*Return: A pointer to the first occurrence in the string s of any of the bytes in the string accept,
*         or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
int k = 0;

while (*s != '\0')
{
for (k = 0; accept[k] != '\0'; k++)
{
if (*s == accept[k])
{
return (s);
}
}
s++;
}

return (0);
}
