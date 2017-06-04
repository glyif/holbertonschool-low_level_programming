#ifndef HASH_TABLES
#define HASH_TABLES
#include <stdlib.h>
#include <stdio.h>
#include "base_structs.h"
void *_calloc(int blocks, int size);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int hash_insert(hash_node_t **head, const char *key, const char *value);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
#endif
