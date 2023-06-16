#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations
 *              of single-digit numbers separated by ", ".
 *              The numbers are printed in ascending order.
 *              It uses the putchar function to print the characters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
