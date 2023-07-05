#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* Print a new line when the end of the string is reached */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Print the current character */
	_putchar(*s);

	/* Recursive call with the next character */
	_puts_recursion(s + 1);
}
