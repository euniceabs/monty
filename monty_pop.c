#include "monty.h"
/**
 * f_pop - removes the top element of the stack
 * @head: the stack pointer
 * @line_counter: the line counter
 * Description: this function removes the top element
 * from a stack. It checks if the stack is empty and,
 * if not, removes the top element, updates the head
 * pointer, and frees the memory. If the stack is empty,
 * it prints an error message and exits.
 *
 * Return: no value
 */
void f_pop(stack_t **head, unsigned int line_counter)
{
	if (*head != NULL)

	{
		stack_t *top = *head;
		*head = top->next;
		free(top);
	} else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_counter);
		exit(EXIT_FAILURE);
	}
}
