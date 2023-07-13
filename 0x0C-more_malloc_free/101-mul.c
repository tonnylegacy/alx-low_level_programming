#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * multiply - Multiplies two positive numbers represented as strings
 * @num1: First number as a string
 * @num2: Second number as a string
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry;
	int *result;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = malloc((len1 + len2) * sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			carry += (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1];
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (i < len1 + len2 - 1 && result[i] == 0)
		i++;

	while (i < len1 + len2)
		printf("%d", result[i++]);

	printf("\n");

	free(result);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
