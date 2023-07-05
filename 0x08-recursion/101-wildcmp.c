#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if identical, 0 otherwise
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match, move to the next characters */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If s2 contains '*', it can match any string (including empty) */
	if (*s2 == '*')
	{
		/* Check if s2+1 matches any string starting from s1 */
		if (*(s2 + 1) == '\0')
			return (1); /* s2+1 is the last character, so they match */

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1); /* Match s1+1 with s2 */

		return (wildcmp(s1, s2 + 1)); /* Skip '*' in s2 */
	}

	return (0); /* Characters don't match and s2 doesn't contain '*' */
}
