#include "monty.h"

/**
 * pop - swaps top 2 on stack
 * @stack: stack
 * @line_number: line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	printf("line %d: pop\n", line_number);
}

/**
 * swap - swaps top 2 on stack
 * @stack: stack
 * @line_number: line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	printf("line %d: swap\n", line_number);
}

/**
 * add - adds top 2 on stack
 * @stack: stack
 * @line_number: line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	printf("line %d: add\n", line_number);
}

/**
 * nop - nothing, no op
 * @stack: stack
 * @line_number: line number
 */
void nop(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	printf("line %d: nop\n", line_number);
}
