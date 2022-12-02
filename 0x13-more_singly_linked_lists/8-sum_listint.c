#include "lists.h"
/**
 * sum_listint - returns sum of all elements
 * @head: list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (; temp != NULL;)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
