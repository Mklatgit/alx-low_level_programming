#include <stdio.h>
#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0 if big or 1 if little
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
