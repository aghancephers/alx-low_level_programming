#include <stdio.h>
#include "main.h"

/**
 * main - Entry point. Prints the name of the program.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	/* Print the first argument, which is the name of the program */
	printf("%s\n", argv[0]);

	return (0);
}
