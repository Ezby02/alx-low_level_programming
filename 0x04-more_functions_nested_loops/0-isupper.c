#include "main.h"
/**
 *_isupper-checks if a character is uppercase
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
