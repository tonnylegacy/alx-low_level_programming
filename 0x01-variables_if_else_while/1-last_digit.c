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
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Print the original number */
	printf("Last digit of %d is ", n);

	/* Get the last digit of n */
	last_digit = n % 10;

	/* Print the last digit */
	printf("%d ", last_digit);

	/* Determine if the last digit is greater than 5, equal to 0,
	 * or less than 6 and not 0 */
	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
