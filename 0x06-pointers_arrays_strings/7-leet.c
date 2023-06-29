#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String to encode
 *
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "AEOTL";
	char *leet_replacements = "43071";
	int i, j;

	while (*ptr)
	{
		i = 0;
		j = 0;

		while (leet_chars[i])
		{
			if (*ptr == leet_chars[i] || *ptr == leet_chars[i] + 32)
			{
				*ptr = leet_replacements[j];
				break;
			}

			i++;
			j++;
		}

		ptr++;
	}

	return (str);
}
