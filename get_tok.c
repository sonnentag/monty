#include "monty.h"

int valn;

/**
 * get_tok - get token from line and assign global
 * @line: line got
 * Return: tok
 */
char *get_tok(char *line)
{
	char *tok = NULL;
	const char *arg;

	strtok(line, "\n");
	tok = strtok(line, " \t");
	arg = strtok(NULL, " \t");
	valn = atoi(arg);

	line = NULL;
	return (tok);
}


/**
 * validate_arg - validate argument for global variable
 * @n: arg string
 * Return: 0 on success, -1 on failure
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
		valn = atoi(n);
	}

	return (0);
}
