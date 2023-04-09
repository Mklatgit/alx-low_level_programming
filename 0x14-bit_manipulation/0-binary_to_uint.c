#include <stdio.h>
#include "main.h"

unsigned int binary_to_uint(const char *b);
/**
 * binary_to_uint - convert binary to int
 * @b: string containing binary number
 *
 * Return: converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val = val * 2 + (b[i] - '0');
	}
	return (val);
}
