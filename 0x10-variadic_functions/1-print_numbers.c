#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints a list of integers separated by a specified string.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to be printed.
 * @...: The integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

		i++;
	}

	va_end(args);

	printf("\n");
}
