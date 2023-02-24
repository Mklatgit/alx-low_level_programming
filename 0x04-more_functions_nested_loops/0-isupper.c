#include <unistd.h>
#include "main.h"
/**
 * _isupper - checks if input id upper case alphabets
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	int ab;

	for (ab = 'A'; ab <= 'Z'; ab++)
	{
		if (c == ab)
		{
			return (1);
		}
		else
			return (0);
	}
	return (0);
}
