#include "main.h"
/**
*_strstr - Entry point
*@haystack: input
*@needle: input
*Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0, j;

while (haystack[i])
{
j = 0;
while (needle[j] && haystack[i + j] == needle[j])
j++;

if (!needle[j])
return (haystack + i);
i++;
}

return (0);
}
