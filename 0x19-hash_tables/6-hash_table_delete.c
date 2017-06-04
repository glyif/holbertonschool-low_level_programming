#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 * @ht: pointer to the has table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i, flag;

	hash_node_t *col, *del;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}

	flag = 0;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		col = ht->array[i];
		while (col != NULL)
		{
			if (flag == 1)
				printf(", ");

			flag = 1;
			printf("'%s': '%s'", col->key, col->value);
			del = col;
			col = col->next;
			free(del->key);
			free(del->value);
			free(del);
		}
	}
	printf("}\n");
	free(ht->array);
	free(ht);
}
