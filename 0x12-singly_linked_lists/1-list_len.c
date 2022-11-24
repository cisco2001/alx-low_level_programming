#include "lists.h"

/**
 * list_len - calculates number of elements in a list
 * @h: pointer to the first node in the list
 *
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t number_of_elements = 0;

	while (h)
	{
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}

