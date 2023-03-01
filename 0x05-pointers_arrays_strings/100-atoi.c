#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string into integer
 *@s: input
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int len, digit, con, i, j, n;

	len = 0;
	digit = 0;
	con = 0;
	i = 0;
	j = 0;
	n = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && con == 0)
	{
		if (s[i] == '-')
		{
			++j;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			con = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			con = 0;
		}
		i++;
	}
	if (con == 0)
		return (0);
	return (n);
}
