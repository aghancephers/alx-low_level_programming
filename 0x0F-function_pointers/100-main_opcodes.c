#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *opcode_ptr;

	/* check if the number of arguments is correct */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* convert the number of bytes to integer */
	num_bytes = atoi(argv[1]);

	/* check if the number of bytes is valid */
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* assign the starting address of main function to the pointer */
	opcode_ptr = (char *)main;

	/* print the opcodes in hexadecimal format */
	i = 0;
	while (i < num_bytes)
	{
		if (i == num_bytes - 1)
			printf("%02hhx\n", opcode_ptr[i]);
		else
			printf("%02hhx ", opcode_ptr[i]);

		i++;
	}

	return (0);
}
