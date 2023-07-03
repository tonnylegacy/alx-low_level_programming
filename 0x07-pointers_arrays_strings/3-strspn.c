#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the substring
 *
 * Return: Number of bytes in the initial segment of s consisting only of bytes
 *         from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match = 1;

	while (*s && match)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}

		if (!*a)
			match = 0;

		s++;
	}

	return (count);
}
