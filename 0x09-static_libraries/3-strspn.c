#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: the string to search
*@accept: the substring to search for
*
*Return: the number of bytes in the initial segment of `s`
*that consists entirely of bytes from `accept`.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int found;

	while (*s)
	{
		found = 0;
		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		s++;
	}
	return (n);
}
