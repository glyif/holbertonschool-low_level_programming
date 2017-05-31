#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - stores an element
 * @ht: pointer to hash table to store
 * @key: key
 * @value: value
 *
 * Return: 1 if succeed, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	idx = hash_djb2((const unsigned char *)key) % ht->size;
	return(hash_insert(&ht->array[idx], key, value));
	
}

int hash_insert(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;
	
	new = _calloc(1, sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;

	*head = new;
}
