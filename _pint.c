#include "monty.h"
/**
 * _pint - Entry Point
 * @stack: parameter to check
 * @count: parameter to check
 * Return: all elements of the stack
 */
void _pint(stack_t **stack, unsigned int count)
{
	stack_t *tmp;

	tmp = *stack;
	if (tmp == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", count);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", tmp->n);
}
