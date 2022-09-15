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
 char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
