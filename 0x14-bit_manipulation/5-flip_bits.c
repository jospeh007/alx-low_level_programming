#include "main.h"

/**
 * flip_bits - Count the number of different bits between two numbers.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The count of bits that need to be changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned long int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
