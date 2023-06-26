#include <stdio.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: The input string.
 */
void puts2(char *str)
{
	int i = 0;

	/* Loop through the string, incrementing by 2 */
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
