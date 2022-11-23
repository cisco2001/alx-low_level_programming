#include "stdio.h"
#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: pointer to the first node in the list
 *
 * Return: number of nodes in a list
 */
size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "nil");
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
