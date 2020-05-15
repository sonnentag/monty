#include "monty.h" 

/**
 * push - pushes to stack
 * @stack: stack
 * @line_number: line number
 */
void push(stack_t **stack, unsigned int line_number)
{
	UNUSED(line_number);
	stack_t *temp = NULL, *new = NULL;

		
	if (!valn)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		free(new);
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = valn;
	new->prev = NULL;

	temp = *stack;
	*stack = new;
	new->next = temp;
	if (temp)
		temp->prev = *stack;
}

/**
 * pall - prints all on stack
 * @stack: stack
 * @line_number: line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	UNUSED(line_number);
 	stack_t *rev;
 
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
	UNUSED(line_number);
	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
