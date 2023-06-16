#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 *              of two digits in ascending order, separated by ", ".
 *              The two digits must be different, and the smallest
 *              combination is printed.
 *              It uses the putchar function to print the characters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, ones;

	for (tens = 0; tens <= 8; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');

			if (tens != 8 || ones != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
