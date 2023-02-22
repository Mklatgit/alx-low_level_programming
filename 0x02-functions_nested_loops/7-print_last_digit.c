#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - return the last value of input
 *
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int c)
{
	int l = c % 10;

	if (l < 0)
	{
		l = l * (-1);
		
	}
	_putchar(l + '0');
	return (l);
}
