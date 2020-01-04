#include "monty.h"
/**
 * _stork - Entry Point
 * @h: parameter to check
 * Return: all elements of the list
 */
void _stork(char *line, stack_t **stack, unsigned int counter)
{
	char *one, *two;

	one = strtok(line, " \n\t");
	two = strtok(NULL, " \n\t");
	confi.number = two;
	if (one)
	{
		functions(one, stack, counter);
	}
}