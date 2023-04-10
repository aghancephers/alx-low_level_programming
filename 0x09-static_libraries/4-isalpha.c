#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: the character to be checked
 *
 * Return: 1 if the character is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	/* Check if the character is a lowercase or uppercase letter */
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
