#include <stdio.h>
#include "main.h"
/**
 * main-entry point
 *
 * Print alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar("\n");
	return (0);
}
