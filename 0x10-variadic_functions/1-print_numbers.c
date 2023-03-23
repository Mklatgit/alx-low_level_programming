#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers passed as arguments to function
 * @n: number of intergers passed
 *@separator: character that separates my nums
 *
 * Return: Nothing but print numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
