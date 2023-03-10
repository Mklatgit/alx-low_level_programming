#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 *@s1: input string
 *@s2: input string
 *@n: more bytes for source string
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int len;

	len = 0;
	while (s1[len] != '\0' && s2[len] != '\0')
	{
		if (s1[len] != s2[len])
			return (s1[len] - s2[len]);
		len++;
	}
	return (0);
}
