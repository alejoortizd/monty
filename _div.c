#include "monty.h"
/**
 * _div - entry point.
 * @stack: parameter to check.
 * @count: count of the line where the opcode is taken.
 * Return: Void
 */
void _div(stack_t **stack, unsigned int count)
{
	stack_t *node;
	int i = 0;

	node = (*stack);

	while (node)
	{
		i++;
		node = node->next;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		exit(EXIT_FAILURE);
	}
	node = (*stack)->next;
	(*stack)->next->n /= (*stack)->n;
	free(*stack);
	node->prev = NULL;
	(*stack) = node;
}
