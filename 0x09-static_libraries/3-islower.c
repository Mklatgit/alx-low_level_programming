#include <unistd.h>
#include "main.h"
/**
 * _islower - checks if upprt or lower case alphabets
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
        if (c >= 65 && c <= 90)
        {
                return (0);
        }
        else
                return (1);
}
