#include "hash_tables.h"
/**
 * hash_table_create - creates the hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table,
 * return NULL if something goes wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;

	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}

	ht->array = array;

	return (ht);
}

