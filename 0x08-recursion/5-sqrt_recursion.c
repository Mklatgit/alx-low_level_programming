#include "main.h"

/**
 * _sqrt_recursion - returns square root of num
 *@n: input number
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (_sqrt_num(n, 0));
}
/**
 * _sqrt_num - returns square
 *@x: input number
 *@y: power
 * Return: Always 0.
 */
int _sqrt_num(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	if (y * y == x)
	{
		return (y);
	}
	return(_sqrt_num(x, y + 1));
}
