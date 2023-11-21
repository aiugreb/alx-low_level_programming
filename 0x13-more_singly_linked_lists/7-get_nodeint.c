#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: pointer to first node
 * @index: index of the node to return
 *
 * Return: pointer to the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	for (node = head, node && i < index; node = node->next, i++)
		;
	return (node);
}

