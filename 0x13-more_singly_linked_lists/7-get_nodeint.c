#include "lists.h"
/**
 * get_nodeint_at_index - return nth node of the list
 * @head: list
 * @index: nth node
 * Return: nth node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;
	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (temp);
}
