#include <stdio.h>
#include "main.h"

/**
*main - prints all the arguments passed to the program
*@argc: number of arguments
*@argv: array of arguments
*
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
int i = 0;

while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}

return (0);
}
