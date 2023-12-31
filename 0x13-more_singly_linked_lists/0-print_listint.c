#include "lists.h"

/**
 * print_listint - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t y = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		y++;
	}
	return (y);
}
