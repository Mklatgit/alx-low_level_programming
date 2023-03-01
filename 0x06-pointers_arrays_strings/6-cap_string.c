#include "main.h"
#include <stdio.h>

/**
 * cap_string - changes string from lower to upper cases
 * @src: input string
 * Return: n
 */
char *cap_string(char *src)
{
	int len;

	len = 0;
	for (len = 0; src[len] != '\0'; len++)
	{
		if (src[len - 1] == ' ' || src[len - 1] == '.' || src[len - 1] == '\t' || src[len - 1] == '\n' || len == 0)
		{
			if (src[len] >= 'a' && src[len] <= 'z')
			{
				src[len] = src[len] - 32;
			}
		}
		else
		{
			if (src[len] >= 'A' && src[len] <= 'Z')
				src[len] = src[len] + 32;
		}
	}
	return (src);
}
