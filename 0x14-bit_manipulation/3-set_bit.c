#include "main.h"

/**
 * set_bit - sets the value of a given bit to 1.
 *
 * @n: pointer of an unsigned long int.
 * @index: index of the bit set to the value 1
 *
 * Return: 1 if it worked, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n |= (1UL << index);
return (1);
}
