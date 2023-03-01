#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *@dest: input string
 *@src: input string
 *@n: more bytes for source string
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, mover;

	len = 0;
	mover = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (mover < n && src[mover] != '\0')
	{
		dest[len] = src[mover];
		len++;
		mover++;
	}
	dest[len] = '\0';
	return (dest);
}
