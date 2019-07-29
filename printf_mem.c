#include "holberton.h"

/**
 * _realloc - creates an array of integers
 * @ptr: type char pointer of memory previously allocated
 * @old_size: type unsigned int size in bytes
 * @new_size: type unsigned int size in bytes
 * Return: p or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *p, *ns;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	ns = ptr;
	for (x = 0; x < old_size; x++)
		*(p + x) = *(ns + x);
	free(ptr);
	return (p);
}
