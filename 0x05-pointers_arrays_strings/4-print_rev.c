#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The input string.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse */
	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
