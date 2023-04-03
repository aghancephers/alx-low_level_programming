#include "main.h"

/**
*_memcpy - Copy memory area
*
*Copies @n bytes from the memory area pointed to by @src to the memory area
*pointed to by @dest. The memory areas must not overlap.
*
*@dest: Pointer to the destination memory area
*@src: Pointer to the source memory area
*@n: Number of bytes to copy
*
*@return: Pointer to the destination memory area @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *pdest = dest;
char *psrc = src;

while (n-- > 0)
*pdest++ = *psrc++;

return (dest);
}
