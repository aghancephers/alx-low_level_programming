#include "main.h"

/**
*clear_bit - Sets the value of a given bit to 0.
*@n: Pointer to the number to change.
*@index: Index of the bit to clear.
*
*Return: 1 for success, -1 for failure.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1;

if (index > 63)
return (-1);

mask <<= index;

while (mask <= ULONG_MAX >> 1 && mask > 0)
{
if (*n & mask)
{
*n ^= mask;
return (1);
}
mask <<= 1;
}

return (-1);
}
