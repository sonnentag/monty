#include "monty.h"

/**
 * main - monty main
 * @argc: argument count
 * @argv: arguments
 * Return: 0 or failure
 */
int main(int argc, char *argv[])
{
	char *file = argv[1], *line = NULL, *str = NULL;
	FILE *fd;
	unsigned int ln = 1;
	size_t bufsize = 0;
	stack_t *stack = NULL;
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
	for (; ((getline(&line, &bufsize, fd)) != -1); ++ln)
	{
		str = get_tok(line);
		if (str)
			for (j = 0; ops[j].opcode; j++)
				if (strcmp(ops[j].opcode, str) == 0)
				{
					ops[j].f(&stack, ln);
					if (valn == -1)
					{
						free_stack(&stack, fd, line);
						exit(EXIT_FAILURE);
					}
					valn = -2;
					break;
				}
	}
	free_stack(&stack, fd, line);
	return (0);
}

/**
 * free_stack - free stack
 * @stack: stack
 * @fd: file descriptor
 * @line: line
 */
void free_stack(stack_t **stack, FILE *fd, char *line)
{
	stack_t *temp = NULL;

	fclose(fd);

	while (*stack != NULL)
	{
		temp = (*stack)->next;
		free(*stack);
		(*stack) = temp;
	}
	free(line);
}
