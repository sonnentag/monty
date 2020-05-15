#include "monty.h"

/**
 * pop - swaps top 2 on stack
 * @stack: stack
 * @line_number: line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
        stack_t *temp = NULL;

	if (!(*stack))
	{
	        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	        exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	free(*stack);
	*stack = temp;
}

/**
 * swap - swaps top 2 on stack
 * @stack: stack
 * @line_number: line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	size_t len = 1;
        while (temp)
        {
                temp = temp->next;
                len++;
        }
	if (len < 3)
	{
                fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
                exit(EXIT_FAILURE);
	}
}

/**
 * add - adds top 2 on stack
 * @stack: stack
 * @line_number: line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	size_t len = 1;
	stack_t *temp = *stack;

        while (temp)
        {
                temp = temp->next;
                len++;
        }
	if (len < 3)
	{
                fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
                exit(EXIT_FAILURE);
	}
}

/**
 * nop - nothing, no op
 * @stack: stack
 * @line_number: line number
 */
void nop(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	UNUSED(line_number);
}
