#include "main.h"

/**
 * clear_bit - Change the value of a specific bit to 0.
 * @n: Pointer to the number to be modified.
 * @index: Position of the bit to be set to 0.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
