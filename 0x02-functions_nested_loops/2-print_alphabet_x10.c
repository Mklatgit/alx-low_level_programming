#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints lower case alphabets 10 times
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int aa, bb;

	for (bb = 0; bb < 10; bb++)
	{
		for (aa = 'a'; aa <= 'z'; aa++)
		{
			_putchar(aa);
		}
		_putchar('\n');
	}
}
