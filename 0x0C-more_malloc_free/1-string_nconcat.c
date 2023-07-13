#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to concatenate from s2
 *
 * Return: Pointer to the newly allocated concatenated string
 *         NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_len = 0, s2_len = 0, concat_len = 0;
	unsigned int i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	/* Adjust n if it is greater or equal to the length of s2 */
	if (n >= s2_len)
		n = s2_len;

	/* Calculate the length of the concatenated string */
	concat_len = s1_len + n;

	/* Allocate memory for the concatenated string */
	concat = malloc((concat_len + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to the concatenated string */
	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];

	/* Copy n bytes of s2 to the concatenated string */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	/* Add null terminator to the concatenated string */
	concat[i] = '\0';

	return (concat);
}
