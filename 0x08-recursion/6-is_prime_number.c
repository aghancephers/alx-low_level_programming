#include "main.h"

int prime_helper(int n, int i);

/**
 * is_prime_number - determines if a number is prime
 * @n: number to evaluate
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_helper(n, n - 1));
}

/**
 * prime_helper - recursively evaluates if a number is prime
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int prime_helper(int n, int i)
{
	if (i < 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i - 1));
}
