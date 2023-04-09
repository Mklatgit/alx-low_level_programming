#include <stdio.h>
#include "main.h"

/**
 * flip_bits - return number of bits to change from one number to next
 * @n: first input number
 * @m: second input number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int fbits = n ^ m;

	while (fbits > 0)
	{
		count++;
		fbits &= (fbits -1);
	}
	return (count);
}
