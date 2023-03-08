#include "main.h"

/**
 * _pow_recursion - returns num raised to pwer num2
 *@x: input number
 *@y: power
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	int n = x;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	n  = n *  _pow_recursion(x, y - 1);
	return (n);
}
