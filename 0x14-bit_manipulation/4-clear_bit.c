#include "main.h"

/**
*clear_bit - sets the value of a given bit to 0
*@n: pointer to the number to change
*@index: index of the bit to clear
*
*Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1;

/* check if index is within bounds */
if (index > 63)
return (-1);

/* shift the 1 to the left to the index position */
mask <<= index;

/* while loop that shifts the 1 left until it reaches the last bit of the unsigned long int */
while (mask <= ULONG_MAX >> 1 && mask > 0)
{
/* if the bit is set to 1, shift the 1 to the left by 1 bit */
if (*n & mask)
mask <<= 1;
/* if the bit is set to 0, set the bit to 1 and return success */
else
{
*n &= ~mask;
return (1);
}
}

/* if the bit is still set to 1 after all shifts, return failure */
return (-1);
}
