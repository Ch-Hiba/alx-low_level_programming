#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees the listint_t list
 * @head: a double pointer of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
