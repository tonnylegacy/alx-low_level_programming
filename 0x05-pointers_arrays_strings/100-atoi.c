#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int i = 0;
	int found_number = 0;

	/* Handle leading whitespace */
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;

	/* Check for sign */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert string to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		found_number = 1;
		i++;
	}

	/* Return 0 if no number is found */
	if (!found_number)
		return (0);

	return (num * sign);
}
