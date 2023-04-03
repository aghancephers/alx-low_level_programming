#include "main.h"

/**
*_strspn - Gets the length of the initial segment of a string that consists of only bytes from another string
*
*@s: The string to be checked
*@accept: The string containing the bytes to be checked against
*
*Return: The number of bytes in s that consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *p1 = s;

while (*p1)
{
char *p2 = accept;
int match_found = 0;

while (*p2)
{
if (*p1 == *p2)
{
count++;
match_found = 1;
break;
}

p2++;
}

if (!match_found)
return (count);

p1++;
}

return (count);
}
