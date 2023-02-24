#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_square - square length size
 *@size: input lenght
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
	int nm, p;

	if (size > 0)
	{
		for (nm = 0; nm < size; nm++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
