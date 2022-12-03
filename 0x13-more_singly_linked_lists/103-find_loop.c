#include "lists.h"
/**
 * find_listint_loop - finds the loop in a list
 * @head: the linked list
 * Return: address of the node where the loop starts
 * or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp;
	listint_t *tmp;

	temp = tmp = head;

	do {
		if (temp->next)
			temp = temp->next;
		else
			return (NULL);
		if (tmp->next->next)
			tmp = tmp->next->next;
		else
			return (NULL);
	} while (tmp != temp);

	temp = head;

	while (tmp != temp)
	{
		tmp = tmp->next;
		temp = temp->next;
	}
	return (temp);
}
