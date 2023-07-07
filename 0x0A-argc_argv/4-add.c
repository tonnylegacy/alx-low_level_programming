#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string is a positive number
 * @str: The string to check
 * Return: 1 if positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] < '0' || str[i] > '9')
	return (0);
	}

	return (1);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
		printf("Error\n");
		return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
