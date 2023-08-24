#include "monty.h"

/**
 * custom_rotate - Rotates the stack to the top by moving
 * the second element to the top.
 * @head: pointer to the head of stack.
 * @line_counter: Line number
 * Return - No value
 */
void custom_rotate(stack_t **head, __attribute__((unused))
		unsigned int line_counter)
{
	stack_t *tmp = *head, *new_head;

	if (!(*head) || !((*head)->next))
	{
		return;
	}

	new_head = (*head)->next;
	new_head->prev = NULL;

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	*head = new_head;
}
