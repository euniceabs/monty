#include "monty.h"

/**
 * free_stack - Frees a doubly linked list.
 * @head: Pointer to the head of the stack.
 *
 * This function frees the memory allocated for
 * each node in a doubly linked list.
 * It starts from the head of the list and
 * iterates through each node, freeing the memory,
 * until it reaches the end of the list.
 */
void free_stack(stack_t *head)
{
	if (head)
	{
		free_stack(head->next);
		free(head);
	}
}
