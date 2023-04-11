#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate array of strings
 * @ac: number of strings
 * @av: array of strings
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Get total length of strings */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++; /* Account for space between strings */
	}

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	/* Copy strings into concatenated string */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
