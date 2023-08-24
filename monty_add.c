#include "monty.h"

/**
 * f_add - adds the two top elements in the stack.
 * @head: head of stack
 * @line_counter: line number
 * Description: this function adds the top two
 * elements of the stack by taking the stack's head
 * pointer @head and line number as inputs @line_counter
 * if the stacks contains less than two elements,
 * an error message is printed in a new line.
 *
 * Return: no return
 */
void f_add(stack_t **head, unsigned int line_counter)
{
	stack_t *top = *head;
	struct bus global_var;

	global_var.file = NULL;
	global_var.line_content = NULL;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_counter);
		free(global_var.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

		top->next->n += top->n;
		*head = top->next;
		(*head)->prev = NULL;

		free(top);
}

