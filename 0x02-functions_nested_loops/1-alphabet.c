#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - prints lower case alphabets
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	int aa;

	for (aa = 'a'; aa <= 'z'; aa++)
	{
		_putchar(aa);
	}
	_putchar('\n');
}
