#include "hash_tables.h"

/**
 * key_index - gets index of a key
 * @key: key to search
 * @size: size of the hash table array
 *
 * Return: index of hash key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return(hash_djb2(key) % size);
}
