#include "main.h"

/**
*_memcpy - copies a block of memory to another
*@dest: pointer to the memory where the copied block will be stored
*@src: pointer to the memory where the block to be copied is located
*@n: number of bytes to be copied
*
*Return: a pointer to the destination memory block
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
