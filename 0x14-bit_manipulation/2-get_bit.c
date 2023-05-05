#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if index is greater than 63
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;
	unsigned int i = 0;

	if (index > 63)
		return (-1);

	while (i <= index)
	{
		bit_val = n & 1;
		n = n >> 1;
		if (i == index)
			return (bit_val);
		i++;
	}

	return (bit_val);
}
