#include "lists.h"
/**
 * list_len - find length of a linked list
 * @h: singly linked list
 * Return: returns the number of elements in list
 */
size_t list_len(const list_t *h)
{
	const list_t *n;
	size_t c;

	c = 0;
	n = h;

	for (; n != NULL;)
	{
		n = n->next;
		c++;
	}
	return (c);
}
