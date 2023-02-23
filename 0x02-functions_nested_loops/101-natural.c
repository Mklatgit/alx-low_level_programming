#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b = 0, n = 1024;
	int summ = 0;

	for (a = 0; a < n; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b = b + a;
			summ = summ + b;
		}
	}
	printf("%d\n", summ);
	return (0);
}
