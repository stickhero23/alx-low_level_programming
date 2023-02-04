#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key to look for
 * Return: value associated with element, NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size, index;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	temp = (ht->array[index]);
	if (temp != NULL)
	{
		while (strcmp(strdup(key), temp->key) != 0 || temp == NULL)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
		else
			return (temp->value);
	}
	else
		return (NULL);
}
