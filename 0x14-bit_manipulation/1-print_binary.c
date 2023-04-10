#include <stdio.h>

/**
 * print_binary - prints the binary equivalent
 * of a number.
 * @n: unsigned long int to be printed
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
putchar((n & 1) ? '1' : '0');
}

