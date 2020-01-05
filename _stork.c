#include "monty.h"
/**
 * _stork - Entry Point
 * @line: parameter to check
 * @stack: parameter to check
 * @count: parameter to check
 * Return: elements
 */
void _stork(char *line, stack_t **stack, unsigned int count)
{
	char *one, *two;

	one = strtok(line, " \n\t");
	two = strtok(NULL, " \n\t");
	confi.number = two;
	if (one && one[0] != '#')
	{
		functions(stack, count, one);
	}
}
