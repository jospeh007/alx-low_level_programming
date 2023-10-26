#include <stdio.h>

/**
 * Converts a binary number represented as a string to an unsigned integer.
 *
 * @param b The binary string to convert.
 * @return The converted number, or 0 if there are invalid characters or NULL pointer.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);  /* Handle the case where b is NULL */

	unsigned int result = 0;
	int i = 0;

	while (b[i] != '\0')
	{/* Check if the current character is not '0' or '1' */
	if (b[i] != '0' && b[i] != '1')
	{
		return (0);  /* Invalid character found, return 0 */
	}
	result = result * 2 + (b[i] - '0');
	i++;
	}
	return (result);
}

/**
 * Main function to test the binary_to_uint function.
 */
int main(void)
{
	const char *binary_str = "1010101";
	unsigned int result = binary_to_uint(binary_str);

	if (result == 0)
	{
		printf("Invalid binary string or NULL pointer.\n");
	}
	else
	{
		printf("Converted value: %u\n", result);
	}

	return (0);
}
