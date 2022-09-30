#include "main.h"
#include <ctype.h>
/**
 * _isalpha-checks for alphabetic character
 *
 *@c: char type letter
 *
 *Return: returns 0 if c is an alphabet and 1 if otherwise
 */
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
