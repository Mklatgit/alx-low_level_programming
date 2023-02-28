#include "main.h"
/**
 * puts2- print string
 *@s: input pointer to string
 *
 *
 * Return: Always 0.
 */
void puts2(char *s)
{
	int len = 0;
	int t = 0, b;
	char *temp = s;

	while (*temp != '\0')
	{
		temp++;
		len++;
	}
	t = len - 1;
	for (b = 0; b <= t; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(s[b]);
		}
	}
	_putchar('\n');
}
