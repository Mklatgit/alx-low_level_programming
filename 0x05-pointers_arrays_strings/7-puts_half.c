#include "main.h"
/**
 * puts_half- print string
 *@s: input pointer to string
 *
 *
 * Return: Always 0.
 */
void puts_half(char *s)
{
	int a, b, c;

	c = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		c++;
	}
	b = c / 2;
	if (c % 2 == 1)
	{
		b = (c + 1) / 2;
	}
	for (a = b; s[a] != '\0'; a++)
		_putchar(s[a]);

	_putchar('\n');
}
