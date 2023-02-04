#include "has_tables.h"
/**
 * hash_table_print - prints has table
 * @ht: hash table
 * Return: key/value or nothing if ht is NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp = NULL;
	char *d = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("%s\'%s\': \'%s\'", d, temp->key, temp->value);
				d = ", ";
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
