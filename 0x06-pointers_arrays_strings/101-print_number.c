#include "main.h"
#include <stdio.h>

/**
 * print_number - prints number
 *@n: input
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int w;
	
	w = n;
	if (n < 0)
	{
		_putchar('-');
		w = -n;
	}
	if (w % 10 != 0)
	{
		print_number(w / 10);
	}
	_putchar((w % 10) + '0');	
}
