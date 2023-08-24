#include "monty.h"

/**
 * sub_top- subtracts the second top element from the
 * top element of the stack.
 * @stack_head: Pointer to the head of the stack
 * @line_counter: Line number
 * Return: No value
 */
void sub_top(stack_t **stack_head, unsigned int line_counter)
{
	stack_t *current;
	int result;
	int node_count = 0;

	current = *stack_head;

	while (current != NULL)

	{
		current = current->next;
		node_count++;
	}

	if (node_count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_counter);
		fclose(global_var.file);
		free(global_var.line_content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}

	current = *stack_head;
	result = current->next->n - current->n;
	current->next->n = result;
	*stack_head = current->next;
	free(current);
}
