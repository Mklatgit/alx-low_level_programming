#include <unistd.h>
#include "main.h"
/**
 * times_table - multiply by 9
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int aa, bb, cc;

	for (aa = 0; aa < 10; aa++)
	{
		for (bb = 0; bb < 10; bb++)
		{
			cc = bb * aa;
			if (cc >= 10)
			{
				_putchar((cc / 10) + '0');
			}
			else
				_putchar(' ');
			_putchar((cc % 10) + '0');
			if (bb != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
