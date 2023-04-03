#include "main.h"

/**
*_memset - fill memory with a constant byte
*
*@s: A pointer to the memory area to be filled
*@b: The character to fill the memory area with
*@n: number of bytes to be filled
*
*Return: A pointer to the filled memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;

while (n--)
*p++ = b;

return (s);
}
