#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: first digit of a 2 digit num is the remainder of num/10
 *last digit in num mod 10 from task 1
 *then try compare output with reverse of num to get unique values
 * Return: Always 0 (Success)
 */
int main(void)
{
	int aa, bb;

	for (aa = 0; aa < 9; aa++)
	{
		for (bb = aa + 1; bb < 10; bb++)
		{
			if (aa != bb)
			{
				putchar(aa + '0');
				putchar(bb + '0');
				if (aa + bb < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
