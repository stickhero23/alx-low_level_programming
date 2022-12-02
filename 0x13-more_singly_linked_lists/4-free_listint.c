#include "lists.h"
/**
 * free_listint - to free listint_t
 * @head: list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	for (; head != NULL;)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
