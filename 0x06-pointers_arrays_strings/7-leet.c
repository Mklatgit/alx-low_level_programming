#include "main.h"
#include <stdio.h>

/**
 * leet - encodesstring to 1337
 * @src: input string
 * Return: n
 */
char *leet(char *src)
{
	int len, mov, i;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	len = 0;
	mov = 0;
	while (s1[mov] != '\0')
	{
		mov++;
	}
	for (len = 0; src[len] != '\0'; len++)
	{
		for (i = 0; i < mov; i++)
		{
			if (src[len] == s1[i])
			{
				src[len] = s2[i];
			}
		}
	}
	return (src);
}
