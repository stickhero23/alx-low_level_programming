#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *temp;

	temp = *head;
	for (; temp != NULL && head != NULL;)
	{
		tmp = temp;
		temp = temp->next;
		free(tmp);
	}
	*head = NULL;
}
