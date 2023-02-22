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
			_putchar(cc + '0');
			_putchar(',');
			_putchar(' ');
			cc = 0;
		}
		_putchar('\n');
	}
}
