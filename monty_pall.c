#include "monty.h"

/**
 * f_pall - prints all values of the stack
 * @head: head pointer of tje stack
 * @line_counter: line number
 * Return: (void)
 *
 * Description: this function prints all the values on the stack
 * begining from the of the stack
 */
void f_pall(stack_t **head, unsigned int line_counter)
{
	stack_t *current = *head;
	(void)line_counter;

	if (!(*head))
		return;

	for (; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
	}
}
