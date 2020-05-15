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
	mparse(fd);

	return (0);
}
