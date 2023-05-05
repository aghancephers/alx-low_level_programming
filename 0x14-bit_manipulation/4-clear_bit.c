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
/* check if index is within bounds */
if (index > 63)
return (-1);

/* use a mask to clear the bit at the given index */
*n &= ~(1UL << index);

return (1);
}
