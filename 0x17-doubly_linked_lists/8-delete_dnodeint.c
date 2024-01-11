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
	dlistint_t *current, *before, *del;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		(*head)->before = NULL;
		free(current);
		return (1);
	}
	while (current)
	{
		if (i == index)
			del = current;
		if (i == index - 1)
			before = current;
		if (i == index + 1)
		{
			before->next = current;
			current->before = before;
			free(del);
			return (1);
		}
		if (current->next == NULL && i == index)
		{
			before->next = NULL;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
