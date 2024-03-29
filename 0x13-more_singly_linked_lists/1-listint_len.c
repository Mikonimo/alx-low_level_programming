#include "lists.h"
#include <stddef.h>
/**
 * listint_len - returns the no of elements in a linked list
 * @h: the head of the list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
