#include "monty.h"
/**
 * frees - entry point
 * @stack: parameter to check
 * Return: something
 */
void frees(stack_t *stack)
{
	stack_t *st;
	int i;

	for (i = 0; stack != 0; i++)
	{
		st = stack->next;
		free(stack);
		stack = st;
	}
	fclose(confi.filename);
	free(confi.line);
}
