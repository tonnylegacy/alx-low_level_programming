#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
