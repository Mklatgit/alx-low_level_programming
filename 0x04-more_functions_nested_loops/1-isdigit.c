#include <unistd.h>
#include "main.h"
/**
 * _isdigit - checks if input is a digit
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	int ab;

	for (ab = 0; ab < 10; ab++)
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
