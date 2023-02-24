#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - line n length
 *@n: input lenght
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int nm, p;

	if (n > 0)
	{
		for (nm = 1; nm < n; nm++)
		{
			for (p = 0; p < nm; p++)
			{
				_putchar('\\');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
