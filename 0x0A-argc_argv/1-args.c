#include <stdio.h>
#include "main.h"

/**
*main - Entry point. Prints the number of arguments passed to the program.
*@argc: The number of arguments passed to the program.
*@argv: An array of pointers to the strings passed as arguments to the program.
*
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
/* Ignore the second argument and print the number of arguments passed. */
int num_args = argc - 1;

(void)argv;

printf("%d\n", num_args);

return (0);
}
