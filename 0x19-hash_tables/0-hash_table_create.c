#include "hash_tables.h"

/**
 * _calloc - calloc function implementation
 * @blocks: blocks to allocate of @size
 * @size: bytes per block
 *
 * Return: pointer to allocated memory or NULL
 */
void *_calloc(int blocks, int size)
{
	char *allocate;

	allocate = malloc(blocks * size);

	if (allocate == NULL)
		return (NULL);

	return ((char *)allocate);
}

/**
 * hash_table_create - creates a has table with @size size
 * @size: size of hash table
 *
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);

	new = _calloc(1, sizeof(hash_table_t));

	if (new == NULL)
		return (NULL);

	new->array = _calloc(size, sizeof(hash_node_t *));

	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	
	new->size = size;

	return (new);
}
