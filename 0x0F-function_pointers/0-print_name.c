#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - calls a function to print a name
 * @name: name to print
 * @f: pointer to function that prints a string
 *
 * This function checks if @name and @f are not NULL, and if so, calls @f
 * passing @name as an argument, effectively printing the name using the
 * specified function.
 */
void print_name(char *name, void (*f)(char *))
{
/* Check if @name and @f are valid */
if (name == NULL || f == NULL)
{
return;
}

/* Call the function pointed to by @f to print the name */
f(name);
}
