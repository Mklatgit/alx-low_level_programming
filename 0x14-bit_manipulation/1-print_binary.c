#include <stdio.h>
#include "main.h"

/**
 * print_binary - print binary equivalent of number
 * @n: input number to print binary of
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int c, i = 0;
	unsigned long int k = 0;

	for (c = 31; c >= 0; c--)
	{
		k = n >> c;
		if (k & 1)
		{
			_putchar('1');
			i++;
		}
		else
		{
			_putchar('0');
		}
	}
	if (!i)
		_putchar('0');
}
