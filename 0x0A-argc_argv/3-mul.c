#include <stdio.h>
#include "main.h"

/**
*_atoi - converts a string to an integer
*@s: string to be converted
*
*Return: the int converted from the string
*/
int _atoi(char *s)
{
int i = 0, sign = 1, result = 0;

if (s[i] == '-')
{
sign = -1;
i++;
}

for (; s[i] != '\0'; ++i)
{
if (s[i] < '0' || s[i] > '9')
break;

result = result * 10 + (s[i] - '0');
}

return (sign *result);
}

/**
*main - multiplies two numbers
*@argc: number of arguments
*@argv: array of arguments
*
*Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int num1, num2;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);

printf("%d\n", num1 *num2);

return (0);
}
