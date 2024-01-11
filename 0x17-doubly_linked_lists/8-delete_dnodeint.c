#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes
 * deletes the node at index
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nav, *before, *delete;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	nav = *head;
	if (index == 0)
	{
		*head = nav->next;
		(*head)->prev = NULL;
		free(nav);
		return (1);
	}
	while (nav)
	{
		if (i == index)
			delete = nav;
		if (i == index - 1)
			before = nav;
		if (i == index + 1)
		{
			before->next = nav;
			nav->prev = before;
			free(delete);
			return (1);
		}
		if (nav->next == NULL && i == index)
		{
			before->next = NULL;
			free(nav);
			return (1);
		}
		nav = nav->next;
		i++;
	}
	return (-1);
}
