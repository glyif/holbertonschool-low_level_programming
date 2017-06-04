#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: pointer to the has table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flag;

	hash_node_t *col;

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
			col = col->next;
		}
	}
	printf("}\n");
}
