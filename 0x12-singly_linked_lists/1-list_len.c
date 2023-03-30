#include "lists.h"

/**
 * list_len - function to return the num of elements in a linked list_t list
 * @h: singly linked list
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
