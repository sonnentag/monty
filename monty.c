#include "monty.h"

/**
 * main - monty main
 * @argc: argument count
 * @argv: arguments
 * Return: 0 or failure
 */
int main(int argc, char *argv[])
{
	char *file = argv[1];
	FILE *fd;
	unsigned int ln = 1;
	char *line = NULL, *str = NULL;
	size_t bufsize = 0;
	stack_t *stack;
	int j;

	instruction_t ops[] = {
		{"push", push}, {"pall", pall}, {"pint", pint}, {NULL, NULL}
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(file, "r");
	if (!fd)
	{
		fprintf(stderr, "Error: can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	while ((getline(&line, &bufsize, fd)) != -1)
	{
		str = get_tok(line);
		if (str)
printf("string: %s\n", str);
			for (j = 0; ops[j].opcode; j++)
				if (strcmp(ops[j].opcode, str) == 0)
				{
					ops[j].f(&stack, ln);
					break;
				}
		ln++;
	}
	fclose(fd);
	free_stack(&stack);
	free(line);

	return (0);
}

/**
 *
 *
 */
void free_stack(stack_t **stack)
{
	stack_t *temp;
	
	if (stack != NULL)
	{
		while ((*stack)->next)
		{
			temp = (*stack);
			(*stack) = (*stack)->next;
			free(temp);
		}
		free(stack);
	}
}
