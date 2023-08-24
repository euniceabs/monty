#include "monty.h"

/**
 * f_swap - it swaps the top two elements of the stack.
 * @head: Pointer to the head of the stack
 * @line_counter: Line number
 *
 * Return: No value
 */
void f_swap(stack_t **head, unsigned int line_counter)
{
	stack_t *top = *head;
        stack_t *second = top->next;
	int temp;

	if (*head == NULL || (*head)->next == NULL)
	{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_counter);
	exit(EXIT_FAILURE);
	}

	temp = top->n;

	top->n = second->n;
	second->n = temp;
}

