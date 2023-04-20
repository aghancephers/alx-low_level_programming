#include "3-calc.h"

/**
 * op_add - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	int result = 0;

	do 
	{
		result += a;
	} while (--b);

	return (result);
}

/**
 * op_div - Divides two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	int result = 0;

	if (b == 0) 
	{
		return (-1); // divide by zero error
	}
	do 
	{
		result++;
	} while (a >= b && (a -= b));
	return (result);
}

/**
 * op_mod - Finds the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of a divided by b.
 */
int op_mod(int a, int b)
{
	if (b == 0) 
	{
		return (-1); // divide by zero error
	}
	while (a >= b) 
	{
		a -= b;
	}
	return (a);
}
