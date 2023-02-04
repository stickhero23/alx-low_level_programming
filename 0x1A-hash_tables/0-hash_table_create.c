#include "hash_tables.h"

/**
 * hash_table_create - create hash table given size
 * @size: size
 * Return: pointer to table; NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htb;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	htb = malloc(sizeof(hash_table_t));
	if (htb == 0)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (array == 0)
	{
		free(htb);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	htb->size = size;
	htb->array = array;

	return (htb);
}
