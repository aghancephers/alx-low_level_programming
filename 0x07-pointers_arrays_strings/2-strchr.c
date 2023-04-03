#include "main.h"

/**
*_strchr - Locate character in string
*
*This function locates the first occurrence of @c (converted to a char) in the
*string pointed to by @s. The terminating null character is considered part
*of the string.
*
*@s: Pointer to the string to be searched
*@c: Character to search for
*
*@return: A pointer to the located character in @s, or a null pointer if the
*character is not found.
*/
char *_strchr(char *s, char c)
{
char *p = s;

while (*p != '\0')
{
if (*p == c)
return p;

p++;
}

return (0);
}
