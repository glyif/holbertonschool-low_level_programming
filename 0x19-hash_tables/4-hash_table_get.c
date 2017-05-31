#include "hash_tables.h"
#include <string.h>

/**
 * get_hash_value - gets value of key
 * @head: start of hash index linked list
 * @key: key
 *
 * Return: value of key or NULL
 */
char *get_hash_value(hash_node_t *head, const char *key)
{
	hash_node_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
			break;
		tmp = tmp->next;
	}

	if (tmp)
		return (tmp->value);

	return (NULL);
}

/**
 * hash_table_get - gets value of key
 * @ht: pointer to hash table
 * @key: key to grab
 *
 * Return: string stored in key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = hash_djb2((const unsigned char *)key) % ht->size;

	return (get_hash_value(ht->array[idx], key));
}
