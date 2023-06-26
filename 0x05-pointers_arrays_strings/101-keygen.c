#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
    int password_length = 10; /* Set the desired length of the password */
    char password[11]; /* Allocate space for the password (including null terminator) */
    int i;

    srand(time(NULL)); /* Seed the random number generator with the current time */

    /* Generate random characters for the password */
    for (i = 0; i < password_length; i++)
    {
        /* Generate a random ASCII value in the range of printable characters */
        int ascii_value = rand() % 94 + 33;
        password[i] = (char)ascii_value;
    }

    password[i] = '\0'; /* Add the null terminator to the end of the password */

    printf("%s", password);

    return (0);
}
