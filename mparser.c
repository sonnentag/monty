#include "monty.h"

int valn;

/**
 * mparse - parse line for opcode and arg
 * @fd: file descriptor
 * Return: number of lines
 */
int mparse(FILE *fd)
{
	unsigned int ln = 0;
	char *line = NULL, *tok = NULL, *arg = NULL;
	size_t bufsize = 0;
	stack_t *stack;
	int j;
	instruction_t ops[] = {
		{"push", push}, {"pall", pall}, {"pint", pint},
		{"pop", pop}, {"swap", swap}, {"add", add}, {"nop", nop},
		{NULL, NULL}
	};

	while ((getline(&line, &bufsize, fd)) != -1)
	{
		if (_strlen(line) > 0)
		{
			tok = strtok(line, " \n");
			arg = strtok(NULL, " \n");
			if (arg)
				valn = atoi(arg);


			for (j = 0; ops[j].opcode; j++)
				if (_strcmp(ops[j].opcode, tok) == 0)
				{
					ops[j].f(&stack, ++ln);
				}
			line = NULL;
		}
		else
			ln++;
	}
	fclose(fd);
	free(line);

	return (ln);
}
