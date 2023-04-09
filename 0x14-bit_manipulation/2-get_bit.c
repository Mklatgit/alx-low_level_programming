#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns status of bit at index
 * @n: input number
 * @index: the value of index
 *
 * Return: index or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitstatus;

	if (index > 31)
		return (-1);
	bitstatus = (n >> index) & 1;
	return (bitstatus);
}
