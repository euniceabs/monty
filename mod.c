#include "monty.h"

/**
 * calc_mod - Calculates the remainder of the top element divided by
 * the second top element of the stack.
 * @head: Pointer to the stack
 * @line_counter: Line number
 * Return: No value
 */

void calc_mod(stack_t **head, unsigned int line_counter)
{
	stack_t *top = *head;

	if (top == NULL || top->next == NULL)

	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_counter);
		exit(EXIT_FAILURE);
	}

	if (top->n == 0)

	{
		fprintf(stderr, "L%d: division by zero\n", line_counter);
		exit(EXIT_FAILURE);
	}

	top->next->n %= top->n;
	*head = top->next;
	(*head)->prev = NULL;

	free(top);
}

