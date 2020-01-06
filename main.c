#include "monty.h"
conf_t confi = {NULL, NULL, NULL};
/**
 * main - entry point
 * @argc: parameter to check
 * @argv: parameter to check
 * Return: something
 */
int main(int argc, char *argv[])
{
	ssize_t i;
	size_t bufsize = 0;
	stack_t *stack = NULL;
	unsigned int count = 1;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	confi.filename = fopen(argv[1], "r");
	if (confi.filename == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	for (; (i = getline(&confi.line, &bufsize, confi.filename) != EOF); count++)
		_stork(confi.line, &stack, count);
	frees(stack);
	exit(EXIT_SUCCESS);
	return (0);
}
