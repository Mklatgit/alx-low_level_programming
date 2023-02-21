#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _abs - return the absolute value of input
 *
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	else
	{
		return (n);
	}
	return (0);
}
