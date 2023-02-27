#include "main.h"
#include "stdio.h"

/**
 * main - Prints the numbers 1-100, but for multiples of three,
 * Fizz is printed instead of the number, for multiple of five,
 * Buzz, and for multiple of both three and five, FizzBuzz
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
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