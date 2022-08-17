#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of list
 * Description: frees listint_t list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
