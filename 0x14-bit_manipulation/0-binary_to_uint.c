#include <stdlib.h>

/**
 * binary_to_uint - It converts a binary number to unsigned integer
 * @b: A string containing binary number
 *
 * Return: Unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int num = 0;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0' || b[i] == '1')
{
num = num << 1;
num += b[i] - '0';
}
else
{
return (0);
}
}
return (num);
}

