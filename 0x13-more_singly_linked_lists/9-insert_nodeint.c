#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node
 * @idx: index where the new node is added
 * @n: value of new node]
 *
 * Return: pointer to the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_n;
	listint_t *node = *head;

	new_n = malloc(sizeof(listint_t));

	if (!head || !new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	for (i = 0; node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_n->next = node->next;
			node->next = new_n;
			return (new_n);
		}
		else
			node = node->next;
	}

	return (NULL);
}
