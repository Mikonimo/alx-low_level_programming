#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int i;

	if (*head == NULL || head == NULL)
		return (0);
	curr = *head;
	i = curr->n;
	*head = curr->next;
	free(curr);
	return (i);
}
