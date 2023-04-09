#include <stdio.h>
#include "main.h"

/**
 * set_bit - set bit to 1 at index
 * @n: pointer where to set bit
 * @index: location to set bit
 *
 * Return: 1 if worked else -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
