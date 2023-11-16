#include "monty.h"

/**
 * push - ongeza humu ndani
 * @kichwa: kichwa chake hiki
 * @wangapi: wangapi humu ndani aisee
 */
void push(stack_t **kichwa, unsigned int wangapi)
{
	stack_t *mupya;

	if (kichwa == NULL)
	{
		printf("L%u: usage: push integer\n", wangapi);
		exit(EXIT_FAILURE);
	}

	mupya = malloc(sizeof(stack_t));
	if (mupya == NULL)
	{
		printf("Error: malloc failed\n");
		wachilia_mpangilio(kichwa, wangapi);
		exit(EXIT_FAILURE);
	}
	mupya->n = placiholder.nambari;
	mupya->prev = NULL;
	mupya->next = *kichwa;

	if (*kichwa != NULL)
		(*kichwa)->prev = mupya;
	*kichwa = mupya;
}

/**
 * pop - toa hapo juu mwanangu
 * @kichwa: kichwa cha orodha
 * @wangapi: wangapi huku bana
 */
void pop(stack_t **kichwa, unsigned int wangapi)
{
	if (kichwa == NULL || *kichwa == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", wangapi);
		exit(EXIT_FAILURE);
	}
	if ((*kichwa)->next != NULL)
	{
		*kichwa = (*kichwa)->next;
		placiholder.nambari = (*kichwa)->n;
		free((*kichwa)->prev);
		(*kichwa)->prev = NULL;
	}
	else
	{
		free(*kichwa);
		*kichwa = NULL;
	}
}

