#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_line - line n length
 *
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int nm;

	if (n > 0)
	{
		for (nm = 1; nm < n; nm++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
