#include "main.h"

/**
* get_endianness - checks the endianness is liitle or big
*
* Return: 0 if edian is big, 1 if endian is little
*/

int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *)&x;
if (*c)
{
return (1);
}
else
{
return (0);
}
}
