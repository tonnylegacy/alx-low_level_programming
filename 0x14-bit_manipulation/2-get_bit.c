#include "main.h"

/**
 * get_bit - Retrieves the value of a specific bit at the given index from a decimal number.
 * @n: The decimal number to search for the bit.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
