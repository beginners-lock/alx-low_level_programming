#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of list
 * Description: frees listint_t list 
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
