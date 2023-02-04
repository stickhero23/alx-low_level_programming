#include "hash_tables.h"
/**
 * hash_table_delete -deletes the hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp, *actual;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				actual = temp;
				temp = temp->next;
				free(actual->key);
				free(actual->value);
				free(actual);
			}
		}
	}
	free(ht->array);
	free(ht);
}
