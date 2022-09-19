#include "main.h"
/**
 * print_rev - print stdout in reverse
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	while(*(s + i) != '\0')
	{
		i++;
	}

	while(i--)
	{
		_putchar(*(s + (i)));
	}
	_putchar('\n');
}
