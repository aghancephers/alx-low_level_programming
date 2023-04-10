#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_digits - checks if a string consists of digits
 * @str: string to be checked
 *
 * Return: 1 if all characters in the string are digits, 0 otherwise
 */
int check_digits(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i])) /* checks if character is a digit */
		{
			return (0); /* if it is not a digit, return 0 */
		}
	}
	return (1); /* if all characters are digits, return 1 */
}

/**
 * main - sums all the numbers passed as arguments
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i, str_to_int, sum;

	sum = 0; /* initialize sum to 0 */

	for (i = 1; i < argc; i++) /* loop through the array of arguments */
	{
		if (check_digits(argv[i])) /* if string consists of digits */
		{
			str_to_int = atoi(argv[i]); /* convert string to integer */
			sum += str_to_int; /* add integer to sum */
		}
		else /* if string contains non-digit characters */
		{
			printf("Error\n"); /* print error message */
			return (1); /* return error code */
		}
	}

	printf("%d\n", sum); /* print the sum of all integers */

	return (0); /* return success code */
}
