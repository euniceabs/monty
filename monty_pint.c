#include "monty.h"

/**
 * f_pint - Prints the value at the top of the stack.
 * @head: A pointer to the head of the stack.
 * @counter: The line number of the instruction.
 *
 * Description: This function prints the value at the top
 * of the stack if the stack is not empty. If the stack is empty, an
 * message is printed to the standard error.
 *
 * Return: No return value.
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head != NULL)
	{
	printf("%d\n", (*head)->n);
	return;
	}

	fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
	exit(EXIT_FAILURE);
}
