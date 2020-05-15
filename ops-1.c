#include "monty.h"

/**
 * push - pushes to stack
 * @stack: stack
 * @line_number: line number
 */
void push(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	printf("line %i: push %i\n", line_number, valn);
}

/**
 * pall - prints all on stack
 * @stack: stack
 * @line_number: line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	printf("line %d: pall\n", line_number);
}

/**
 * pint - pints stack
 * @stack: stack
 * @line_number: line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	printf("line %d: pint\n", line_number);
}
