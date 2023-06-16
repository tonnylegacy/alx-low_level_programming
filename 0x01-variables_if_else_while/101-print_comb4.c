#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 *              of three digits in ascending order, separated by ", ".
 *              The three digits must be different, and the smallest
 *              combination is printed.
 *              It uses the putchar function to print the characters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds, tens, ones;

	for (hundreds = 0; hundreds <= 7; hundreds++)
	{
		for (tens = hundreds + 1; tens <= 8; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if (hundreds != 7 || tens != 8 || ones != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
