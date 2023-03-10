#include "main.h"

/*
 * _memset- fills memory with constant byte
 *@s: pointer to memory area
 *@n: bytes
 *@b: constantc byte
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
