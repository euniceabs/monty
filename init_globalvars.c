#include "monty.h"
/**
 * init_globalvars - initializes a global variable
 *
 * description: This function initializes the members
 * of the bus structure.
 */
void init_globalvars(void)
{
	global_var.arg = NULL;
	global_var.file = NULL;
	global_var.line_content = NULL;
	global_var.lifi = 0;
}
