#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to be duplicated
 *
 * Return: Pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *dup;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicate string */
	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	/* Copy the characters from str to dup */
	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}
