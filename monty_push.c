#include "monty.h"

/**
 * f_push - Add an element to the stack
 * @head: the head pointer of the stack
 * @line_counter: Counter indicating the number of elements in the list.
 *
 * Description: This function inserts a new element at the beginning of
 * the stack pointed to by @head.
 * It increments the 'counter' to reflect the added element.
 * The new element becomes the new head of the stack
 *
 * Return - (void)
 */
void f_push(stack_t **head, unsigned int line_counter)
{
	int p = 0;
	int v;
	int flag = 0;
	char *argument = bus.arg;

	if (bus.arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_counter);
		exit(EXIT_FAILURE);
	}
	if (argument[0] == '-')
	{
		p++;
	for (; argument[p] != '\0'; p++)
	{
		if (argument[p] < '0' || argument[p] > '9')
	{
		flag = 1;
		break;
	}
	}
	if (flag == 1)
	{
	fprintf(stderr, "L%d: usage: push integer\n", line_counter);
	exit(EXIT_FAILURE);
	}
	}

	v = atoi(argument);
	if (flag == 0)
	{
		if (bus.lifi == 0)
	{
		addnode(head, v);
	} else
	{
		addqueue(head, v);
	}
	}
}

