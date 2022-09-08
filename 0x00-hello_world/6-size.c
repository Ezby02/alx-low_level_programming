#include <stdio.h>
/**
 *main-entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of a char- %1u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int- %1u byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int- %1u byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long int- %1u byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float- %1u byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
