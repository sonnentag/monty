#include "monty.h"

/**
 * main - monty main
 * @argc: argument count
 * @argv: arguments
 * Return: 0 or failure
 */
int main(int argc, char *argv[])
{
	unsigned int ln;
	char *file = argv[1];
	FILE *fd;

	if (argc != 2)
	{
		write(2, "USAGE: monty file\n", 18);
		exit(1);
	}

	fd = fopen(file, "r");
	if (!fd)
	{
		write(2, "Error: can't open file ", 23);
		write(2, file, strlen(file));
		write(2, "\n", 1);
		exit(1);
	}

	ln = mparse(fd);
	printf("Line count: %d\n", ln);
	return (0);
}
