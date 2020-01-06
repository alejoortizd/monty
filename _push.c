#include "monty.h"
/**
 * _push - entry Point.
 * @stack: parameter to check
 * @count: parameter to check
 * Return: Void
 */
void _push(stack_t **stack, unsigned int count)
{
	stack_t *new_st;

	new_st = malloc(sizeof(stack_t));
	if (new_st == NULL)
	{dprintf(STDERR_FILENO, "USAGE: monty file\n");
		frees(new_st);
		exit(EXIT_FAILURE); }

	if (!confi.number && confi.number != 0)
	{dprintf(STDERR_FILENO, "L%u: usage: push integer\n", count);
		frees((*stack));
		free(new_st);
		exit(EXIT_FAILURE);
	}

	if (confi.number)
	{new_st->n = atoi(confi.number);
		new_st->next = *stack;
		new_st->prev = NULL;
		if (*stack)
			(*stack)->prev = new_st;
		*stack = new_st;
	}
	else
	{dprintf(STDERR_FILENO, "L%u: usage: push integer\n", count);
		frees((*stack));
		free(new_st);
		exit(EXIT_FAILURE); }
}
