#include "main.h"
#include <stdlib.h>

int count_words(char *str);
int word_length(char *str);
char *copy_word(char *str, int length);

/**
 * strtow - Splits a string into words
 * @str: The string to be split
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int total_words, i, j, k, word_len, word_index;

	if (str == NULL || *str == '\0')
		return (NULL);

	total_words = count_words(str);
	if (total_words == 0)
		return (NULL);

	/* Allocate memory for the array of words */
	words = malloc(sizeof(char *) * (total_words + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	word_index = 0;
	while (str[i] != '\0')
	{
		/* Skip leading spaces */
		if (str[i] == ' ')
		{
			i++;
			continue;
		}

		/* Calculate the length of the current word */
		word_len = word_length(str + i);

		/* Allocate memory for the current word */
		words[word_index] = copy_word(str + i, word_len);
		if (words[word_index] == NULL)
		{
			/* Free previously allocated memory on failure */
			for (j = 0; j < word_index; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		/* Move to the next word */
		i += word_len;
		word_index++;
	}

	words[word_index] = NULL; /* Add the terminating NULL */

	return (words);
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: Number of words
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
		{
			i++;
		}
	}

	return (count);
}

/**
 * word_length - Calculates the length of a word
 * @str: The string containing the word
 *
 * Return: Length of the word
 */
int word_length(char *str)
{
	int length = 0;
	int i = 0;

	while (str[i] != ' ' && str[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}

/**
 * copy_word - Copies a word into a new string
 * @str: The source string containing the word
 * @length: The length of the word
 *
 * Return: Pointer to the new string containing the word, or NULL on failure
 */
char *copy_word(char *str, int length)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (length + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		word[i] = str[i];

	word[length] = '\0'; /* Add the null terminator */

	return (word);
}
