#include "main.h"

/**
 * get_bit - Get the value of a bit at a specific index in a decimal number.
 * @n: The number to inspect.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the requested bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
