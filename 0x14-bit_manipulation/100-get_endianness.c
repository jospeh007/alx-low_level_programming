#include "main.h"

/**
 * get_endianness - Determine the endianness of the machine.
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
