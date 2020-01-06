#include "monty.h"
/**
 * _pop - Entry Point
 * @stack: parameter to check
 * @count: parameter to check
 * Return: new list
 */
void _pop(stack_t **stack, unsigned int count)
{
	stack_t *tmp;

	tmp = *stack;
	if (tmp == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop, stack empty\n", count);
		exit(EXIT_FAILURE);
	}
	*stack = tmp->next;
	if (tmp->next)
		tmp->next->prev = NULL;
	free(tmp);
}
