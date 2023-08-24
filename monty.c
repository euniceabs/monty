#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE_LENGTH 50
bus_t bus = {NULL, NULL, NULL, 0};
/**
 * main - the code interpreter for monty
 * @argc: the number of arguments
 * @argv: location of the file
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	FILE *file;
	stack_t *stack = NULL;
	unsigned int line_counter = 1;
	char *line_content = NULL;
	size_t size = MAX_LINE_LENGTH;
	ssize_t read_line;

	if (argc != 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}

	bus.file = file;


	while ((read_line = getline(&line_content, &size, file)) != -1)
	{
		bus.line_content = line_content;
		line_counter++;

	exec(line_content, &stack, line_counter, file);
	}

	free_stack(stack);
	fclose(file);
	free(line_content);

	return (EXIT_SUCCESS);
}
