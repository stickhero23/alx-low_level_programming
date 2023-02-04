#include "hash_table.h"
/**
 * create_and_add_node - inserts node to hash table
 * @ht: hash table
 * @key: key
 * @value: value of key
 * @index: index where to insert node
 * Return: 1 if success, 0 otherwise
 */
int create_and_add_node(hash_table_t *ht, const char *key, const char *value,
		unsigned long int index)
{
	hash_node_t *node = NULL;
	char *k; /* key */
	char *v; /* value */

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(node);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(!k);
		free(node);
		return (0);
	}

	node->key = k;
	node->value = v;

	if ((ht->array)[index] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[index];
	(ht->array)[index] = node;

	return (1);
}
/**
 * hash_table_set - function to add element to hash table
 * @ht: is the hash table to add key/value
 * @key: the key input
 * @value: is the value associated with the key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = 0;
	unsigned long int index;
	char *v;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	size = ht->size;

	index = key_index((const unsigned char *)key, size);

	new_node = (ht->array)[index];
	while (new_node && (strcmp(key, node->key) != 0))
		new_node = new_node->next;
	if (new_node != NULL)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (new_node->value)
			free(new_node->value);
		new_node->value = v;
		return (1);
	}

	return (create_and_add_node(ht, key, value, index));
}

