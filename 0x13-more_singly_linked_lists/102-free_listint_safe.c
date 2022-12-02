#include "lists.h"
/**
 * free_listint_safe - free list and set the head to null
 * @h: list
 * Return: size pf the list after free
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *prev, *temp;
	size_t count;

	count = 0;
	prev = *h;
	for (count = 0; prev != NULL;)
	{
		count++;
		temp = prev;
		prev = prev->next;
		free(temp);

		if (temp < prev)
			break;
	}
	*h = NULL;

	return (count);
}
