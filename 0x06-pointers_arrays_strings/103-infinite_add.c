#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: Pointer to the result or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, max_len, sum, carry, i, j;

	len1 = strlen(n1);
	len2 = strlen(n2);

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	max_len = len1 > len2 ? len1 : len2;

	r[max_len + 1] = '\0';

	while (i >= 0 || j >= 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}

		r[max_len--] = sum + '0';
	}

	if (carry)
	{
		if (max_len == 0)
			return (0);

		r[max_len--] = carry + '0';
	}

	if (max_len < 0)
		return (r + 1);

	return (r + max_len + 1);
}
