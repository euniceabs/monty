#include "monty.h"

/**
 * exec - This function executes the opcode.
 * @line_content: serves as the line content
 * @stack:the stack head linked list
 * @line_counter: serves as the line counter
 * @file: monty file pointer
 *
 * Return: 0 if opcode is success, 1 if otherwise
 */
int exec(char *line_content, stack_t **stack,
	 unsigned int line_counter, FILE *file)
{

	instruction_t opst[] = {
				{"push", f_push},
				{"pall", f_pall},
				{"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", idle_function},
				{"sub", sub_top},
				{"div", div_Operation},
				{"mul", mul_top},
				{"mod", calc_mod},
				{"pchar", print_Char},
				{NULL, NULL}
				};
unsigned int i = 0;
char *op;
op = strtok(line_content, " \n\t");
if (op != NULL && op[0] != '#')
{
global_var.arg = strtok(NULL, " \n\t");
while (opst[i].opcode != NULL)
{
if (strcmp(op, opst[i].opcode) == 0)
{
opst[i].f(stack, line_counter);
return (0);
}
i++;
}
fprintf(stderr, "L%d: unknown instruction %s\n", line_counter, op);
fclose(file);
free_stack(*stack);
exit(EXIT_FAILURE);
}
return (1);
}
