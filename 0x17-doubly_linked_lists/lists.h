#ifndef LISTS_H
#define LISTS_H

/* this is a structure */
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @preve: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked node structure
 * for ALX project on doubly linked list assignments
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlisint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* function prototypes */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
