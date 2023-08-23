#include "monty.h"

/**
 * addnode - adds a new node to the head stack
 * @head: pointer to the head of the stack
 * @n: new value to be stored in the node
 * Return: no return value
 *
 * Description: this  function adds a new node with an
 * integer value to the head of a stack.
 * It allocates memory for the node using malloc, handles
 * allocation failure, updates pointers, and sets the new node
 * as the stack head.
 * If a current head exists, its prev pointer is adjusted.
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
	fprintf(stderr, "Error: Memory allocation failed\n");
	exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return;
	}

	(*head)->prev = new_node;
	*head = new_node;
}

