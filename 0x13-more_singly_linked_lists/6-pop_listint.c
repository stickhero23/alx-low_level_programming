#include "lists.h"
/**
 * pop_listint - deletes the head node & returns the
 * head node's data.
 * @head: linked list
 * Return: deleted head's node data.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
