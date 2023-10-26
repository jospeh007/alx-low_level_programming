#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to standard output
 * @c: The character to be written to stdout
 *
 * Return: On success, it returns 1.
 * On error, it returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
