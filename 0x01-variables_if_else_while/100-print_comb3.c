#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: first digit of a 2 digit num is the remainder of num/10
 *last digit in num mod 10 from task 1
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cc, bb, aa;

	for (cc = 0; cc < 90; cc++)
	{
		bb = cc / 10;
		aa = cc % 10;
		putchar(aa + '0');
		putchar(bb + '0');
		if (cc < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
