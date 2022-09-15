#include "main.h"
#include <stdio.h>
/**
 *_isupper-checks if a character is uppercase
 *
 *@c: character to be checked
 *
 *Return: 1 if character is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
