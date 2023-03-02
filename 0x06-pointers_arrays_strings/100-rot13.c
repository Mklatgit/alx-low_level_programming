#include "main.h"
#include <stdio.h>

/**
 * rot13 - rotates character 13 places
 * @src: input string
 * Return: n
 */
char *rot13(char *src)
{
	int len, i;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	len = 0;
	i = 0;
	for (len = 0; src[len] != '\0'; len++)
	{
		for (i = 0; i < 52; i++)
		{
			if (src[len] == s1[i])
			{
				src[len] = s2[i];
				break;
			}
		}
	}
	return (src);
}
