#include "main.h"

/**
*_strchr - locates the first occurrence of a character in a string
*@s: pointer to the string to be searched
*@c: the character to be located
*
*Return: pointer to the first occurrence of c in s, or NULL if not found
*/
char *_strchr(char *s, char c)
{
int i = 0;

/* Traverse the string until the end or the target character is found */
for (; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}

/* If the target character is not found, return NULL */
return (0);
}
