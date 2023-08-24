#include "monty.h"

/**
 * print_string - Prints the string starting from the top of the stack,
 * followed by a new line.
 * @stack: Pointer to the head of the stack
 * @line_counter: Line number
 * Return: No value
 */
void print_string(stack_t **stack, unsigned int line_counter)
{
	stack_t *current;
	(void)line_counter;

	current = *stack;

	while (current != NULL)
	{
		if (!(current->n <= 127 && current->n > 0))
	{
		break;
	}
		printf("%c", current->n);
		current = current->next;
	}
	printf("\n");
}
