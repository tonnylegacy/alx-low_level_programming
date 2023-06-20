#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print the first digit (always 0) */
		_putchar(',');
		_putchar(' ');

		for (column = 1; column <= 9; column++)
		{
			product = row * column;

			if (product <= 9)
			{
				_putchar(' '); /* Extra space for single-digit numbers */
			}
			else
			{
				_putchar('0' + (product / 10)); /* Print the tens digit */
			}

			_putchar('0' + (product % 10)); /* Print the ones digit */

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
