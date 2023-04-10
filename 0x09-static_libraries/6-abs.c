#include "main.h"

/**
*_abs - Computes the absolute value of an integer.
*@n: The integer to check.
*
*Return: The absolute value of @n.
*/
int _abs(int n)
{
int abs_value;

if (n < 0)
{
abs_value = n * -1;
}
else
{
abs_value = n;
}

return (abs_value);
}
