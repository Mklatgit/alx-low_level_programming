#include <unistd.h>
#include "main.h"
/**
 * print_sign - prints the sign of input
 * @n: The input character
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (1);
}
