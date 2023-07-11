#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int length1 = 0, length2 = 0;
	int i, j;

	/* Handle NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 and s2 */
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (length1 + length2 + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to the concatenated string */
	for (i = 0; i < length1; i++)
		concat[i] = s1[i];

	/* Copy s2 to the concatenated string */
	for (j = 0; j < length2; j++)
		concat[i + j] = s2[j];

	/* Add null terminator */
	concat[i + j] = '\0';

	return (concat);
}
