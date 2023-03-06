#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: input string
 * @accept: substring
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
