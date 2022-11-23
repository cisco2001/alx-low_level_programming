#include "lists.h"
/**
 * _strlen - calculates string length
 * @str: pointer to memory location with string
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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the first node
 * @str: malloc'ed string
 * Return: address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	/* check whether memory allocation for a new node or str failed */
	if (!new_node || !str)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
