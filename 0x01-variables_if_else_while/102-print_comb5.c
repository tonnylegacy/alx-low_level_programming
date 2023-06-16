#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two
 *              two-digit numbers in ascending order, separated by
 *              a space and a comma.
 *              The numbers range from 0 to 99, and each number is
 *              printed with two digits (e.g., 01, 02, ..., 99).
 *              The combinations of numbers are printed in ascending
 *              order.
 *              It uses the putchar function to print the characters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
