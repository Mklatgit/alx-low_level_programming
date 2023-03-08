#include "main.h"

/**
 * is_prime_number - check if numer is prime
 *@n: input number
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (_prime_num(n, n - 1));
}
/**
 * _prime_num - returns prime num
 *@x: input number
 *@y: counter
 * Return: Always 0.
 */
int _prime_num(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	if (x % y == 0 && y > 0)
	{
		return (0);
	}
	return (_prime_num(x, y - 1));
}
