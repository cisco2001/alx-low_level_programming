#include "stdlib.h"
#include "stdout.h"
#include "lists.h"


/**
 * print_listint - prints elements of a linked list
 * @h: address of the first node
 *
 * Return: number of nodes in a list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int number_of_nodes = 0;
	listint_t *node_address = h;

	while (node_address != NULL)
	{
		printf("%d\n", node_address->n);
		number_of_nodes++;
		node_address = node_address->next;
	}
	return (number_of_nodes);
}
