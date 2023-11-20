#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t linked list
 * @head: pointer to first node
 * @n: value for new node
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n = malloc(sizeof(listint_t));

	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}

