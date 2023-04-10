#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index in a decimal
 * @n: unsigned long int input to be search
 * @index: index of the bit.
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return (n >> index & 1);
}

