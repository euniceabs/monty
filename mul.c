#include "monty.h"

/**
 * mul_top - Multiplies the top two elements of the stack.
 * @stack: Pointer to the stack's top
 * @line_counter: Line number in the script
 * Return - No value
 */
void mul_top(stack_t **stack, unsigned int line_counter)
{
	stack_t *top = *stack;
	int product;

	if (top == NULL || top->next == NULL)

	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_counter);
		exit(EXIT_FAILURE);
	}

	product = top->next->n * top->n;
	top->next->n = product;

	*stack = top->next;
	(*stack)->prev = NULL;

	free(top);
}
