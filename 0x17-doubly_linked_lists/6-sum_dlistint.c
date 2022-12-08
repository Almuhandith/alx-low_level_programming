#include "lists.h"

/**
 * sum_dlistint - sums all the data in dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
