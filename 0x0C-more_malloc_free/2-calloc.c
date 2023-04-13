#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
* *_memset - sets the first n bytes of the memory area pointed to by s to the specified value
*@s: pointer to the memory area to be filled
*@b: value to be set
*@n: number of bytes to be set to the value
*
*Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; ++i)
{
*(s + i) = b;
}

return (s);
}

/**
* *_calloc - allocates memory for an array of nmemb elements of size bytes each
*@nmemb: number of elements to allocate
*@size: size of each element
*
*Return: pointer to the allocated memory, or NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (!ptr)
return (NULL);

for (i = 0; i < nmemb * size; ++i)
*(ptr + i) = 0;

return (void *)ptr;
}
