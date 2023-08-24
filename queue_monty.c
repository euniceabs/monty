#include "monty.h"

/**
 * f_queue - Sets the lifi variable to 1, signaling queue mode
 * @head: stack head pointer
 * @line_counter: the counter line
 *
 * Description: this is responsible for setting the 'lifi'
 * variable to 1, which indicates that the program is
 * operating in queue mode. The 'head' parameter points
 * to the head of the stack or queue, and the 'line_counter'
 * parameter tells the line number in the program where
 * the f_queue function is called. It returns no value
 *
 * Return: No value
 */

void f_queue(stack_t **head, unsigned int line_counter)
{
	(void)head;
	(void)line_counter;
	global_var.lifi = 1;
}
/**
 * addqueue - Adds a new node with the specified value
 * to the tail of the stack.
 * @head: Pointer to the head of the stack.
 * @n: The new value to be added to the stack.
 *
 * Description: This function creates a new node with the
 * value 'n' and appends it to the end of the stack, which is
 * pointed to by 'head'. If the stack is empty, the new node
 * becomes the head of the stack. The 'prev' pointer of the new node
 * is set to point to the last node in the existing stack and
 * and the 'next' pointer of the previous last node is
 * updated to point to the new node.
 *
 * Return - No value
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *current_node;

	current_node = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
	printf("Error: Memory allocation failed\n");
	exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (current_node)
	{
		while (current_node->next)
	{
		current_node = current_node->next;
	}
	}

	if (current_node == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
		else
	{
		current_node->next = new_node;
		new_node->prev = current_node;
	}
}
