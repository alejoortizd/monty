#include "monty.h"
/**
 * _pall - Entry Point
 * @stack: parameter to check
 * @count: parameter to check
 * Return: print list
 */
void _pall(stack_t **stack, unsigned int count)
{
	stack_t *tmp;

	(void) count;
	tmp = *stack;
	for (; tmp; tmp = tmp->next)
		printf("%d\n", tmp->n);
}
