#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: String to encode
 *
 * Return: Pointer to the modified string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *rot13_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_replacements = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	while (*ptr)
	{
		i = 0;
		j = 0;

		while (rot13_chars[i])
		{
			if (*ptr == rot13_chars[i])
			{
				*ptr = rot13_replacements[j];
				break;
			}

			i++;
			j++;
		}

		ptr++;
	}

	return (str);
}
