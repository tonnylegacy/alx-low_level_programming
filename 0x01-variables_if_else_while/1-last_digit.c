#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number and prints its last digit
 *              along with additional information.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Get the last digit of n */
	int last_digit = n % 10;

	/* Print the original number and its last digit */
	printf("Last digit of %d is %d ", n, last_digit);

	/* Determine if the last digit is greater than 5, equal to 0, or less than 6 and not 0 */
	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}

