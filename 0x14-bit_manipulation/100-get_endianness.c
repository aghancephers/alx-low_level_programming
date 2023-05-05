#include "main.h"

/**
 * get_endianness - checks if the current machine is little or big endian
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int test_number = 1;
	char *test_ptr = (char *) &test_number;

	return (*test_ptr);
}
