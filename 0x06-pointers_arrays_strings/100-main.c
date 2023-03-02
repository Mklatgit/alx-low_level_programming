#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	char *ptr;

	ptr = rot13(str);
	printf("%s", ptr);
	printf("------------------------------------\n");
	printf("%s", str);
	printf("------------------------------------\n");
	ptr = rot13(str);
	printf("%s", ptr);
	printf("------------------------------------\n");
	printf("%s", str);
	printf("------------------------------------\n");
	ptr = rot13(str);
	printf("%s", ptr);
	printf("------------------------------------\n");
	printf("%s", str);
	return (0);
}
