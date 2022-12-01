#include "lists.h"
#include <string.h>
/**
 * free_list - free linked list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
