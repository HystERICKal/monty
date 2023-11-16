#include "monty.h"

/**
 * katakata - katakata sentensi
 * @sentensi: sentensi
 * @mpangilio: mpangilio
 * @wangapi: wangapi
 * Return: onge
 */
void katakata(char *sentensi, stack_t **mpangilio, unsigned int wangapi)
{
	char *check_thiss = NULL, *check_these = NULL;

	check_thiss = strtok(sentensi, " ");
	if (!check_thiss || *check_thiss == '\n' ||
			*check_thiss == '#' || *check_thiss == ' ')
		return;
	if (strcmp(check_thiss, "push") == 0)
	{
		check_these = check_thiss;
		check_thiss = strtok(NULL, " ");
		if (angalieko_nambari(check_thiss) == 0)
		{
			dprintf(STDERR_FILENO, "L%d: usage: push integer\n", wangapi);
			wachilia_mpangilio(mpangilio, wangapi);
			exit(EXIT_FAILURE);
		}
		placiholder.nambari = atoi(check_thiss);
		tekeleza_maops(mpangilio, wangapi, check_these);
	}
	else
		tekeleza_maops(mpangilio, wangapi, check_thiss);
}

