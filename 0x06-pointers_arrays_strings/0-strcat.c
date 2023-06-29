#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string to append to
 * @src: Source string to append
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
