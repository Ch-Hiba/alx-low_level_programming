#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node in the index
 * @head: a double pointer
 * @index: the index of node
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *T, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	T = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (T->next == NULL)
			return (-1);
		T = T->next;
	}
	T = temp->next;
	T->next = next->next;
	free(next);
	return (1);

}
