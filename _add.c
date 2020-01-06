#include "monty.h"
/**
 * _add - Funtionces of the opcode add.
 * @stack: Stack.
 * @count: count of the line where the opcode is taken.
 * Return: Void
 */
void _add(stack_t **stack, unsigned int count)
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
		fprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", count);
		exit(EXIT_FAILURE);
	}
	node = (*stack)->next;
	(*stack)->next->n += (*stack)->n;
	free(*stack);
	node->prev = NULL;
	(*stack) = node;
}
