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

	if (head == NULL || *head == NULL)
		return (NULL);

	before_rev = NULL;
	for (; *head != NULL;)
	{
		next = (*head)->next;
		(*head)->next = before_rev;
		before_rev = *head;
		*head = next;
	}
	(*head) = before_rev;

	return (*head);
}
