#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints all the element of a list_t list
 * @h: pointer to the head of the node
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
