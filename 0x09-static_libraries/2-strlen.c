#include "main.h"

/**
*_strlen - returns the length of a string
*@s: pointer to the string to be measured
*
*Return: the length of s
*/
int _strlen(char *s)
{
int length = 0;

/* Increment length until the null terminator is reached */
while (*s != '\0')
{
length++;
s++;
}

return (length);
}
