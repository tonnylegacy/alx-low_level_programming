#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
			total_len++;
		}
		total_len++; /* Account for the newline character */
	}

	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
		return (NULL);

	/* Copy the arguments to the concatenated string */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			str[index] = av[i][len];
			index++;
			len++;
		}
		str[index] = '\n';
		index++;
	}

	str[index] = '\0'; /* Add the null terminator */

	return (str);
}
