#include "lists.h"
/**
 * listint_len - prints the number of elements in listint_t
 * @h: linked list
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
