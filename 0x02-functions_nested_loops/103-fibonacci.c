#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a, n = 4000000;
	long int f, b = 0, c = 1;
	long int summ = 0;

	for (a = 1; a < n; a++)
	{
		f = b + c;
		b = c;
		c = f;
		if (f % 2 == 0)
		{
			summ = summ + f;
		}
	}
	printf("%ld\n", summ);
	return (0);
}
