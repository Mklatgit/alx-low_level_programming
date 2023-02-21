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
	if (c >= 0)
	{
		_putchar((c % 10) + '0');
	}
	else
	{
		int a;
		a = c % 10;
		return (a);
	}
	return (1);
}
