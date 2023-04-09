#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set bit to 0 at index
 * @n: pointer where to set bit
 * @index: location to set bit
 *
 * Return: 1 if worked else -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
