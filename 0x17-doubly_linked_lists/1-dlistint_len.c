#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - find number of elements in linked dlistint_t
 * @h: head pointer
 * Return: number of elements
 */
size dlistint_len(const dlistint_t *h)
{
	size_t list_len = 0;

	while (h != NULL)
	{
		h = h->next;
		list_len++;
	}
	return (list_len);
}
