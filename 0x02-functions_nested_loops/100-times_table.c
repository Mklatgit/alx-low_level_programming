#include <unistd.h>
#include "main.h"
/**
 * print_times_table - multiply by lenght of times table
 *@n: length of time table
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
	int aa, bb, cc, dd;

	if (n > 0 && n < 15)
	{
		for (aa = 0; aa <= n; aa++)
		{
			for (bb = 0; bb <= n; bb++)
			{
				cc = bb * aa;
				if (cc >= 100)
				{
					dd = cc / 10;
					_putchar((dd / 10) + '0');
					_putchar((dd % 10) + '0');
				}
				else if (cc >= 10)
				{
					_putchar((cc / 10) + '0');
				}
				else
					_putchar(' ');
				_putchar((cc % 10) + '0');
				if (bb != n)
				{
					_putchar(',');
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
