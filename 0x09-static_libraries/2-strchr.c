#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate character in a string
 * @s: input string location
 * @c: character
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
