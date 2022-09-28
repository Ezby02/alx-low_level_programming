#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root
 *
 * Return: natural suare root, if < 0 return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}
