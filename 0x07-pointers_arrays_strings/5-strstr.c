#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: substring
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	while (*haystack)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (*haystack == needle[j])
			{
				return (needle);
			}
		}
		haystack++;
	}
	return (0);
}
