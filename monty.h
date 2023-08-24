#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


/* Structures */
/**
 * struct stack_s - Doubly linked list representation of a stack (or queue)
 * @n: Integer value of the node
 * @prev: Pointer to the previous element in the stack (or queue)
 * @next: Pointer to the next element in the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct bus - variables -args, file, line content
 * @arg: value
 * @file: monty file pointer
 * @line_content: content of line
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
struct bus
{
	char *arg;
	FILE *file;
	char *line_content;
	int lifi;
};
extern struct bus global_var;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



/* Function Prototype */
int main(int argc, char *argv[]);
void free_stack(stack_t *head);
int exec(char *line_content, stack_t **stack,
	 unsigned int line_counter, FILE *file);
void f_pall(stack_t **head, unsigned int line_counter);
void addnode(stack_t **head, int n);
void f_push(stack_t **head, unsigned int line_counter);
void f_queue(stack_t **head, unsigned int line_counter);
void addqueue(stack_t **head, int n);
void f_pint(stack_t **head, unsigned int line_counter);
void f_pop(stack_t **head, unsigned int line_counter);
void init_globalvars(void);
void f_swap(stack_t **head, unsigned int line_counter);
void f_add(stack_t **head, unsigned int line_counter);
void idle_function(stack_t **stack, unsigned int line_counter);

/* Other Utility Functions */
int exec(char *line_content, stack_t **stack,
	 unsigned int line_counter, FILE *file);
void init_bus(void);

#endif
