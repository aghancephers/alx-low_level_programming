#include "main.h"

/**
*_memset - fills a block of memory with a specified value
*@s: pointer to the starting address of the memory to be filled
*@b: the desired value to fill the memory with
*@n: number of bytes to be filled with the value
*
*Return: a pointer to the filled memory block
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
