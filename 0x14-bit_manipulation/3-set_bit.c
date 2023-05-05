#include "main.h"

/**
 * set_bit - Sets the bit at a given index to 1.
 *
 * @n: Pointer to the number to change.
 * @index: Index of the bit to set to 1.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is out of range */
if (index > 63)
return (-1);

/* Use bitwise OR to set the bit at the given index */
*n |= (1UL << index);

return (1);
}
