#include "main.h"

/**
 * print_square - Print square using #
 *
 * @size: size of square
 *
 * Return: value of void
 */

void print_square(int size)
{
	int i;
	int j;
	i = 0;
	if (size = 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			for (j =0; j < size; j++)
			{
				_putchar('#');
			}
			i++
				_putchar('\n');
		}
	}
}
