#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int digit;
	int is_negative = 0;

	if (n < 0)
	{
		is_negative = 1;
		_putchar('-');
		n = -n;
	}

	while (n / divisor >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
