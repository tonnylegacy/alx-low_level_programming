#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory block
 * @old_size: Size of the allocated space for ptr in bytes
 * @new_size: New size of the memory block in bytes
 *
 * Return: Pointer to the reallocated memory block
 *         NULL if new_size is zero and ptr is not NULL
 *         NULL if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, size;

	/* If new_size is zero, free ptr and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	/* If new_size is equal to old_size, do not do anything and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* Allocate memory for the new size */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Determine the size to copy */
	size = old_size;
	if (new_size < old_size)
		size = new_size;

	/* Copy contents to the newly allocated memory */
	char *char_ptr = (char *)ptr;
	for (i = 0; i < size; i++)
		new_ptr[i] = char_ptr[i];

	/* Free the old memory block */
	free(ptr);

	return (new_ptr);
}
