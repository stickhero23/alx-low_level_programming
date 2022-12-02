#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: list
 * @index: index of node to delete
 * Return: Always 1, success or -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *tmp;
	unsigned int i = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
		}
		tmp = temp;
		tmp = temp->next;
		temp->next = tmp->next;
		free(tmp);
	}
	return (1);
}
