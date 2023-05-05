#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if b is NULL or contains non-binary digits
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec_val = 0;

	/* Check if b is NULL */
	if (!b)
		return (0);

	/* Loop through each character in b and convert binary to decimal */
	while (b[i])
	{
		/* If b contains non-binary digits, return 0 */
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
		i++;
	}

	/* Return the converted decimal value */
	return (dec_val);
}
