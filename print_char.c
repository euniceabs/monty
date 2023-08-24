#include "monty.h"

/**
 * print_Char - Displays the character located at the top of the stack,
 * followed by a new line.
 * @head: pointer to the stack head
 * @line_counter: Line number
 * Return: No value
 */

void print_Char(stack_t **head, unsigned int line_counter)
{
	stack_t *current = *head;

	if (!current)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_counter);
		fclose(global_var.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (!(current->n >= 0 && current->n <= 127))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_counter);
		fclose(global_var.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", current->n);
}

