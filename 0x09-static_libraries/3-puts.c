#include "main.h"
#include<stdio.h>
/**
*main - entrance point for the code block
*
*Return: Always 0 (Success) if not then fail(1)
*/

/**
*_puts - prints a string, followed by a new line, to stdout
*@str: the string to print
*/
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}

int main(void)
{
puts("\"Programming is like building a multilingual puzzle");
return (0);
}
