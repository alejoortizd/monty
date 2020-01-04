#include "monty.h"
/**
 * montyfile - Entry Point
 * @argc: parameter to check
 * @argv: parameter to check
 * Return: void
 */ 
void montyfile(int argc, char *argv[])
{
	ssize_t i;
	size_t BUFSIZ = 0;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		dprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	confi.filename = fopen(argv[1], "r");
	if (filename == NULL)
	{
		dprintf(stderr, "Error: Can't open file %s\n", *argv[1]);
	}
	while (i = getline(confi.line, BUFSIZ, filename) != EOF)
	{
		count++;
		_stork(confi.line, &stack, count)
	}
}
