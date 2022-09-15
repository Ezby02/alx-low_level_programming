#include "main.h"
#include <stdio.h>
/**
 *_isupper-checks if a character is uppercase
 */
int _isupper(int c)
{
	int c;
	
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
