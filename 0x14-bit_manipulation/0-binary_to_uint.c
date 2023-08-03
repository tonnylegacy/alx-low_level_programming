#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there is an invalid character.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;
	int idx = 0;

	if (b == NULL)
		return (0);

	while (b[idx])
	{
		if (b[idx] == '0' || b[idx] == '1')
		{
			bit = b[idx] - '0'; /* Convert char '0' or '1' to 0 or 1. */
			result = (result << 1) | bit; /* Shift result left by 1 and add the new bit. */
			idx++;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
