#include "main.h"
/**
 * main-print 1 to 100
 * numbers multiple by 3 print Fizz
 * numbers multiple by 5 print Buzz
 * numbers multiple by both 3 and 5 print FizzBuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
