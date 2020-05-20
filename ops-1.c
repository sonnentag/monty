#include "monty.h"

/**
 * push - pushes to stack
 * @stack: stack
 * @line_number: line number
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *new;

	(void)line_number;

	if (!valn || valn == -2)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		valn = -1;
	}
	else
	{
		new = malloc(sizeof(stack_t));
		if (!new)
		{
			free(new);
			printf("Error: malloc failed\n");
			valn = -1;
		}
		else
		{
			new->n = valn;
			new->prev = NULL;

			temp = *stack;
			*stack = new;
			new->next = temp;
		}
	}
/**
 *	if (temp)
 *		temp->prev = *stack;
 */
}

/**
 * pall - prints all on stack
 * @stack: stack
 * @line_number: line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *rev;

	(void)line_number;

	if (*stack)
	{
		rev = *stack;
		while (rev)
		{
			printf("%d\n", rev->n);
			rev = rev->next;
		}
	}
}

/**
 * pint - pints stack
 * @stack: stack
 * @line_number: line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		valn = -1;
	}
	printf("%d\n", (*stack)->n);
}
