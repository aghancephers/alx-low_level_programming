#include "main.h"
#include <limits.h>
/**
 * _pow_recursion - Computes the value of x raised to the power of y.
 * @x: Base value.
 * @y: Exponent value.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int result = _pow_recursion(x, y - 1);
if (y < 0)
{
return -1;
}
if (y == 0)
{
return 1;
}
if (result == -1 || (INT_MAX / x) < result)
{
return -1;
}

return x * result;
}
