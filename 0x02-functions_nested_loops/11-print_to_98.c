#include <unistd.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers to 98
 *@n: input passed to function
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	int a, b;

	if (n >= 0 && n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a > 9)
			{
				_putchar(' ');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(a + '0');
			}
			if (a != 98)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
	else if (n > 98 && n < 1000)
	{
		if (n > 100)
		{
			for (a = n; a >= 98; a--)
			{
				if (a >= 100)
				{
					b = a / 10;
					_putchar(' ');
					_putchar((a / 100) + '0');
					_putchar((b % 10) + '0');
					_putchar((a % 10) + '0');
				}
				else
				{
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
				}
				if (a != 98)
				{
					_putchar(',');
				}
			}
		}
		else
		{
			_putchar(' ');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		if (a != 98)
		{
			_putchar(',');
		}
		_putchar('\n');
	}
	else if (n < 0)
	{
		b = (-1) * n;

		for (a = b; a > 0; a--)
		{
			if (a > 9)
			{
				_putchar(' ');
				_putchar('-');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar('-');
				_putchar(a + '0');
			}
			if (a != 98)
			{
				_putchar(',');
			}
		}
		for (a = 0; a <= 98; a++)
		{
			if (a > 9)
			{
				_putchar(' ');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(a + '0');
			}
			if (a !=98)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
