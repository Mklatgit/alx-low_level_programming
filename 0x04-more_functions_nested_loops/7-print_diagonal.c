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
		for (nm = 0; nm < n; nm++)
		{
			for (p = 0; p < n; p++)
			{
				if (p == nm)
				{
					_putchar('\\');
				}
				else if (p < nm)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
