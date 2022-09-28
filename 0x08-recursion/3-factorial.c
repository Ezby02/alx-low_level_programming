#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: given number
 *
 * Return: factorial of n and if < 0, -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
			return (n * factorial(n - 1));
}
