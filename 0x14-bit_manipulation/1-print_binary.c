#include "main.h"

/**
 * print_binary - Print the binary representation of a decimal number.
 * @n: The decimal number to be converted and printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, count = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
