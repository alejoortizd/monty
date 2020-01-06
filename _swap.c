#include "monty.h"
/**
 * _swap - Entry Point
 * @stack: parameter to check
 * @count: parameter to check
 * Return: print list
 */
void _swap(stack_t **stack, unsigned int count)
{
	int i;

	if (*stack && (*stack)->next)
	{
		i = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = i;
	} else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		exit(EXIT_FAILURE);
	}
}
