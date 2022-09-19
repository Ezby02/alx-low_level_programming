#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: string to measure
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while(*(s + i))
		i++;
	return (i);
}
