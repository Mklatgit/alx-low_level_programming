#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *@dest: input string
 *@src: input string
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int len, mover;

	len = 0;
	mover = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[mover] != '\0')
	{
		dest[len] = src[mover];
		len++;
		mover++;
	}
	dest[len] = '\0';
	return (dest);
}
