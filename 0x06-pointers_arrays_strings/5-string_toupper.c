#include "main.h"
#include <stdio.h>

/**
 * _strncpy - concatenates two strings
 *@dest: input string
 *@src: input string
 *@n: more bytes for source string
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;
	while (len < n && src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
