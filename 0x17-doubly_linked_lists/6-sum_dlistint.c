#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of all data n
 * @head: head of linked list
 * Return: the sum of all data n of linked list
 * return zero if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
