#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a substring
 * @s: input string
 * @accept: substring
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, i;
	unsigned int w = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				w++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (w);
		}
	}
	return (w);
}
