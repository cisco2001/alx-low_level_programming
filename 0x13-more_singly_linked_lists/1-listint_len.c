#include "stdlib.h"
#include "stdio.h"
#include "lists.h"


/**
 * listint_len - calculates number of elements in a linked list
 * @h: holds address of the first node in the list
 *
 * Return: size of a linked list
 */

size_t listint_len(const listint_t *h)
{
	listint_t node_address = (listint_t *)h;
	size_t list_size = 0;

	while (node_address != NULL)
	{
		list_size++;
		node_address = node_address->next;
	}
	return (list_size);
}

