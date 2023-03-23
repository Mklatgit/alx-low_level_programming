#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print anything passed as arguments to function
 * @format: type of argument being passed
 *
 * Return: Nothing but print anything.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s, *op = "";
	int i = 0;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", op, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", op, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", op, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char*);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", op, s);
					break;
				default:
					i++;
					continue;
			}
			op = ",";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
