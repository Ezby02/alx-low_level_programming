#include "main.h"
/**
 * _puts - write string to stdout stream
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while(*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
