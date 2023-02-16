#include <stdio.h>

/**
 * main - size of computer
 *
 * Return 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of a int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of long long int: %d byte(s)", sizeof(long long int));
	printf("Size of float: %d byte(s)", sizeof(float));

	return (0);