#include "lists.h"

/**
 * free_listint2 - frees a list when the head is NULL
 * @head: head of the list
 *
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
