#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end ->  add node at end of a listint_t list.
  * @head: pointer to the head of the linked list.
  * @n: integer value to be added to the list.
  *
  * Return: address of the new element or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	}
	return (new_node);
}
