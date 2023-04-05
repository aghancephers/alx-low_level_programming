/**
*factorial - Computes the factorial of a given integer
*
*@n: Integer to compute factorial from
*
*Return: The factorial of n, or -1 if n is negative
*/
int factorial(int n)
{
/* Base case: If n is negative, return -1 */
if (n < 0)
{
return (-1);
}
/* Base case: If n is 0 or 1, return 1 */
if (n <= 1)
{
return (1);
}
/* Recursive case: Compute the factorial of n-1 and multiply it by n */
return (n * factorial(n - 1));
}
