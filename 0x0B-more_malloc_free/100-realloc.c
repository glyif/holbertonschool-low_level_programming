#include <stdlib.h>

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr - original memory block
 * @old_size - size of old memory block
 * @new_size - size of new memory block
 *
 * Return: void pointer to new memory block location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ar;
	unsigned int i;
	char *arcpy, *ptrcopy;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ar = malloc(new_size);

	if (ar == NULL)
		return (NULL);

	if (ptr == NULL)
		return (ar);

	arcpy = ar;
	ptrcopy = ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		arcpy[i] = ptrcopy[i];

	free(ptr);

	return(ar);
}
