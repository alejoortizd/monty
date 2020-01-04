#include "monty.h"
/**
* montyfile - Entry Point
* @argv: Parameter to check
* Return: void
*/
void montyfile(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	conf_t *filename = fopen(argv[1], "r");
	if (filename == NULL)
	{
		dprintf(stderr"Error: Can't open file %s\n", *argv[1]);
	}
	return (0);
}
