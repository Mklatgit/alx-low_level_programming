#include "main.h"

/**
 * is_palindrome - check if string is palindrome
 *@s: input string
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
		return (_palindrome(s, 0, str_lenght(s)));
}
/**
 * _palindrome - returns palindrome
 *@x: input char
 *@y: string straight lenght
 *@z: string reverse lenght
 * Return: Always 0.
 */
int _palindrome(char *x, int y, int z)
{
	if (*x == 0 || y < 0 || z < 0)
	{
		return (0);
	}
	if (y >= z)
	{
		return (1);
	}
	return (_palindrome(x, y + 1, z -1));
}
/**
 * str_lenght - check lenght of string
 *@n: input string
 * Return: Always 0.
 */
int str_lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_lenght(s + 1));
}
