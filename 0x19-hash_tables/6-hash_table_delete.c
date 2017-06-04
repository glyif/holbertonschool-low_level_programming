#include "hash_tables.h"
/**
 *
 * hash_table_delete - deletes the hash table
 * @ht: pointer to the has table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	hash_node_t *col, *del;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		col = ht->array[i];
		while (col != NULL)
		{
			del = col;
			col = col->next;
			free(del->key);
			free(del->value);
			free(del);
		}
	}
	free(ht->array);
	free(ht);
}
