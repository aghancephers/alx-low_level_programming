#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints the result of simple operations
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;
	int result;
	int error_code = 0;

	if (argc != 4)
	{
		printf("Error\n");
		error_code = 98;
	}
	else
	{
		num1 = atoi(argv[1]);
		op = argv[2];
		num2 = atoi(argv[3]);

		if (get_op_func(op) == NULL || op[1] != '\0')
		{
			printf("Error\n");
			error_code = 99;
		}
		else if ((*op == '/' && num2 == 0) ||
			 (*op == '%' && num2 == 0))
		{
			printf("Error\n");
			error_code = 100;
		}
		else
		{
			result = get_op_func(op)(num1, num2);
			printf("%d\n", result);
		}
	}

	return (error_code);
}
