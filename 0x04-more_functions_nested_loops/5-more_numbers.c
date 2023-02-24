#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print number 0 to 10
 *
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
