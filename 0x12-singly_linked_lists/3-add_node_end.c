#include "lists.h"

/**
 * _strlen - calculates length of the string
 * @str: pointer to the memory location containing a string
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to the first node
 * @str: malloc'ed string
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *duplicate_string = strdup(str);

	if (!new_node || !str || !duplicate_string)
		return (NULL);

	new_node->str = duplicate_string;
	new_node->len = _strlen(duplicate_string);
	new_node->next = NULL;

	/* check whether list is empty */
	if (!(*head))
		*head = new_node;
	else
	{
		list_t *last_node = *head;

		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
