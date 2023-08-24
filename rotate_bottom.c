#include "monty.h"

/**
 * rotate_bottom - Rotates the stack elements to the bottom.
 * @head: ppointer to the stack head
 * @line_counter: Line number
 * Return: No value
 */
void rotate_bottom(stack_t **head, __attribute__((unused))
		unsigned int line_counter)
{
	stack_t *last = *head;

	if (*head == NULL || (*head)->next == NULL)

		return;

	while (last->next)
	last = last->next;
	last->next = *head;
	(*head)->prev = last;
	(*head) = last;
	last->prev->next = NULL;
	last->prev = NULL;
}

