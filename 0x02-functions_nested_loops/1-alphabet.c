#include <stdio.h>
#include "main.h"
/**
 * main-entry point
 *
 * Print alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
int print_alphabet(void)
{
	int letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	
	putchar("\n");
	return (void);
}
