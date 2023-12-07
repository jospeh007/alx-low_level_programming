#include "lists.h"

/**
 * get_dnodeint_at_index - Get the index of node
 * @head: The current head node
 * @index: index of the node
 *
 * Return: Address of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while(head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
