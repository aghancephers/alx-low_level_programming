#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything passed as argument list based on the format.
 * @format: A list of types of arguments passed to the function.
 *          The types can be 'c' for char, 'i' for integer,
 *          'f' for float, and 's' for string.
 *          The list must end with the null character '\0'.
 *          If the format string is NULL, then the function will do nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *separator = "";
	unsigned int i;

	va_start(args, format);

	/* loop through the format string */
	for (i = 0; format && format[i]; i++)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				continue;
		}
		separator = ", ";
	}

	printf("\n");
	va_end(args);
}
