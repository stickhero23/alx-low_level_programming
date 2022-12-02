#include "lists.h"
/**
 * reverse_listint - reverse prints the list
 * @head: list
 * Return: reverse printed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before_rev;
	listint_t *after_rev;

	if (*head == NULL)
		return (NULL);

	after_rev = *head;
	*head = after_rev->next;
	before_rev = (*head)->next;
	afer_rev->next = NULL;
	if (*head == NULL)
	{
		*head = after_rev;
		return (after_rev);
	}

	for (; before_rev != NULL;)
	{
		(*head)->next = after_rev;
		after_rev = *head;
		*head = before_rev;
		before_rev = (*head)->next;
	}
	(*head)->next = after_rev;
	return (*head);
}
