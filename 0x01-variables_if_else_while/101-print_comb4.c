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
	int aa, bb, cc;

	for (aa = 0; aa < 8; aa++)
	{
		for (bb = aa + 1; bb < 10; bb++)
		{
			for (cc = bb + 1; cc < 10; cc++)
			{
				putchar(aa + '0');
				putchar(bb + '0');
				putchar(cc + '0');
				if (aa != 7 || bb != 8 || cc != 9)
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
