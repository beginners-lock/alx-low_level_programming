#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of a dlistint_t linked list
 * @head: header of double linked list
 * @index: index of the node, starting from 0
 * Return: a address of nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *headcopy;
	unsigned int x;

	headcopy = head;
	if (headcopy != NULL)
	{
		while (headcopy->prev != NULL)
			headcopy = headcopy->prev;

		for (x = 0; (x < index) && (headcopy != NULL); x++)
			headcopy = headcopy->next;
		return (headcopy);
	}
	else
		return (NULL);
}
