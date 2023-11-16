#include "monty.h"

/**
 * main - main entry
 * @argc: argument array
 * @argv: arg list
 * Return: o
 */
int main(int argc, char *argv[])
{
	FILE *the_pathfindr = NULL;
	char *holder = NULL;
	char *c = NULL;
	size_t s = 0;
	unsigned int wangapi = 1;
	stack_t *mpangilio = NULL;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	the_pathfindr = fopen(argv[1], "r");
	if (!the_pathfindr)
	{
		dprintf(STDERR_FILENO, "Error: Can't open this file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	for (; getline(&holder, &s, the_pathfindr) != -1; wangapi++)
	{
		if (*holder != '\n')
		{
			c = strtok(holder, "\n");
			katakata(c, &mpangilio, wangapi);
		}
	}
	fclose(the_pathfindr);
	free(holder);
	if (mpangilio != NULL)
		wachilia_mpangilio(&mpangilio, wangapi);
	return (0);
}

