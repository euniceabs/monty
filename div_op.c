#include "monty.h"

/**
 * div_Operation - Divides the top two stack elements.
 * @head: Pointer to the stack head.
 * @line_counter: Line number.
 * Return -  No return.
 */
void div_Operation(stack_t **head, unsigned int line_counter)
{
	stack_t *top = *head;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_counter);
		exit(EXIT_FAILURE);
	}

	if (top->n == 0)
	{
		fprintf(stderr, "L%d:  division by zero\n", line_counter);
		exit(EXIT_FAILURE);
	}

	top->next->n /= top->n;
	*head = top->next;
	(*head)->prev = NULL;

	free(top);
}
