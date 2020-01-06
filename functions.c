#include "monty.h"
/**
 * functions - Entry Point
 * @stack: parameter to check
 * @count: parameter to check
 * @option: parameter to check
 * Return: elements
 */
void functions(stack_t **stack, unsigned int count, char *option)
{
	int i = 0;

	instruction_t op[] = {
		{"pint", _pint},
		{"push", _push},
		{"pall", _pall},
		{"pop", _pop},
		{"add", _add},
		{"nop", _nop},
		{"swap", _swap},
		{"sub", _sub},
		{NULL, NULL}
	};

	while (op[i].opcode)
	{
		if ((strcmp(op[i].opcode, option)) == 0)
		{
			op[i].f(stack, count);
			break;
		}
		i++;
	}
	if (op[i].f == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", count, option);
		exit(EXIT_FAILURE);
	}
}
