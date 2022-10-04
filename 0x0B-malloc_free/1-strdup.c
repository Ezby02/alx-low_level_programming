#include "main.h"
#include <stdio.h>
/**
 * _strdup - copy a string to newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to copied string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}

