#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print number 0 to 9
 *
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
