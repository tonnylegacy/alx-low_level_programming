#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: Pointer to a string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to a string.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start = (length + 1) / 2;
	int i;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
