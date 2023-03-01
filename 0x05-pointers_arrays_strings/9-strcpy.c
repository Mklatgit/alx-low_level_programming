#include "main.h"
#include <stdio.h>
/**
 * _strcpy- print string
 *@dest: icoppied into
 *@src: lcopy
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int tmp;
	
	while (*(src + 1) != '\0')
	{
		len++;
	}
	for (tmp = 0; tmp < len; tmp++)
	{
		dest[tmp] = src[tmp];
	}
	dest[len] = '\0';
	return(dest);
}
