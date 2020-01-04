#include "monty.h"
/**
 * _pint - Entry Point
 * @h: parameter to check
 * Return: all elements of the list
 */
void _pint(stack_s *h, unsigned int counter)
{
	size_t i = 0;

	if (h == NULL)
		dprintf(stderr, "")
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
}