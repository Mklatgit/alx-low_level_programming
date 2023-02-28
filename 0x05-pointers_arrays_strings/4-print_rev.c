#include "main.h"
/**
 * print_rev- print string
 *@s: input pointer to string
 *
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0;
	int t;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (t = len; t > 0; t--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
