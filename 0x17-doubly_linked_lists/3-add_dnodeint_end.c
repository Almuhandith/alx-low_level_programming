#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of the
 * dlistint_t list
 *
 * @head: head of the list
 * @n: data
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
	}

	new->prev = h;

	if (h != NULL)
		h->next = new;

	*head = new;

	return (new);
}
