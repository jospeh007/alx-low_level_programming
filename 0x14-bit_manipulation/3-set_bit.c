#include "main.h"

/**
 * set_bit - Modify a specific bit at the given index, setting it to 1.
 * @n: Pointer to the decimal number to be modified.
 * @index: Index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
