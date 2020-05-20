#include "monty.h"

int valn;

/**
 * mparse - parse line for opcode and arg
 * @fd: file descriptor
 * Return: number of lines
 */
char *get_tok(char *line)
{
	char *tok = NULL;
	const char *arg;
	strtok(line, "\n");
	strtok(line, "#");
	tok = strtok(line, " \t");
	arg = strtok(NULL, " \t");
	if (arg)
		validate_arg(arg);
	
	line = NULL;
	return (tok);
}


/**
 *
 *
 */
int validate_arg(const char *n)
{
	if (n)
	{
		while (*n)
		{
			if ((*n >= 48) && (*n <= 57)) 
			{
				n++;
			}
			else
				return (-1);
		}
		if (atoi(n) <= 256)
			valn = atoi(n);
	}

	return (0);
}
