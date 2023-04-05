#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free the listint_t list
 * @head: head of the list
 * Return: NULL if there's an error
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
