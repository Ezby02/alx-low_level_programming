#include "main.h"
/**
 * _abs-computes absolute value of an integer
 *
 * @n: takes integer type input of function
 *
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
