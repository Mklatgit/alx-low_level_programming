#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b = 0, c = 1, n = 50;
	long int f;

	for (a = 1; a <= n; a++)
	{
		f = b + c;
		b = c;
		c = f;
		printf("%d", f);
		if (a != n)
		{
			printf(",");
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
