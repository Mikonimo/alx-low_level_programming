#include "main.h"
/**
 * factorial - returns a factorial of a given no
 *@n: the no being evaluated
 *
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
