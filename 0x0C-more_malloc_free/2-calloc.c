#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 *         NULL if allocation fails or nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	/* Check if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate the total size */
	total_size = nmemb * size;

	/* Allocate memory */
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize memory to zero */
	char *char_ptr = (char *)ptr;
	unsigned int i;

	for (i = 0; i < total_size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
