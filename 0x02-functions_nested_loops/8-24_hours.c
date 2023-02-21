#include <unistd.h>
#include "main.h"
/**
 * jack_bauer - prints every minutes of the day
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int aa, bb;

	for (aa = 0; aa < 24; aa++)
	{
		for (bb = 0; bb < 60; bb++)
		{
			_putchar((aa / 10) + '0');
			_putchar((aa % 10) + '0');
			_putchar(':');
			_putchar((bb / 10) + '0');
			_putchar((bb % 10) + '0');
			_putchar('\n');
		}
	}
}
