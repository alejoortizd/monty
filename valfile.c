#include "monty.h"

void montyfile(char *argv[])
{
	FILE *filename;
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filename = fopen(argv[1], "r");
	if (filename == NULL)
	{
		printf("Error: Can't open file %s\n", *argv[1]);
	}
	return (0);
}
