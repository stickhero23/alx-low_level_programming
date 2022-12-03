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

	while (temp != NULL && tmp != NULL)
	{
		temp = temp->next;
		tmp = tmp->next;
		
		temp = tmp;
		if (temp != tmp)
		{
			temp = temp->next;
			tmp = tmp->next;
		}
		return (temp);
	}
	return (NULL);
}
