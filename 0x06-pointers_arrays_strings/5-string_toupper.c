#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes string from lower to upper cases
 * @src: input string
 * Return: n
 */
char *string_toupper(char *src)
{
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		if (src[len] >= 'a' && src[len] <= 'z')
			src[len] = src[len] - 32;
		len++;
	}
	return (src);
}
