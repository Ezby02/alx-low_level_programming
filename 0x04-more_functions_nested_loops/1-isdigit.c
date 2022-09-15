#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks digit
 *
 * @c: return int type
 *
 * Return: return 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	int i = isdigit(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
