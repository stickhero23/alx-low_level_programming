#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head to pointer
 * index: index of the node that should be deleted
 * Return: 1 if success, -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	temp = *head;
	for (count = 0; temp != NULL && count < index; count++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (count == index)
	{
		if ((*head)->next == NULL)
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(temp);
			return (1);
		}
		if (temp->next == NULL)
		{
			temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
