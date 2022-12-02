#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at
 * a given position
 * @head: list
 * @index: index where to place new node
 * @n: data for the node
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	i = 0;

	if (*head == NULL && index > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL && index - i > 0)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
