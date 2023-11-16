#include "monty.h"

/**
 * pall - the val handler
 * @kichwa: kichwa ya list
 *@wangapi: wangapi kwa list
 *Return: onge
 */
void pall(stack_t **kichwa, unsigned int wangapi)
{
	stack_t *holdr = NULL;

	if (kichwa == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: invalid stack\n", wangapi);
		exit(EXIT_FAILURE);
	}

	for (holdr = *kichwa; holdr != NULL; holdr = holdr->next)
	{
		printf("%d\n", holdr->n);
	}
}

/**
 *pint - handle stacktop
 *@kichwa: kichwa ya list
 *@wangapi: wangapi kwa list
 *Return: onge
 */
void pint(stack_t **kichwa, unsigned int wangapi)
{
	if (!kichwa || !*kichwa)
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", wangapi);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*kichwa)->n);
}

/**
 * swap - badilishana
 * @kichwa: kichwa ya list
 * @wangapi: wangapi kwa list
 */
void swap(stack_t **kichwa, unsigned int wangapi)
{
	int v;

	if (*kichwa == NULL || kichwa == NULL || (*kichwa)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n", wangapi);
		wachilia_mpangilio(kichwa, wangapi);
		exit(EXIT_FAILURE);
	}
	v = (*kichwa)->n;
	(*kichwa)->n = (*kichwa)->next->n;
	(*kichwa)->next->n = v;
}

/**
 *nop - malenge tu
 *@kichwa: kicha cha list
 *@wangapi: wangapi humu ndani
 *Return: usirudi
 */
void nop(stack_t **kichwa, unsigned int wangapi)
{
	(void)kichwa;
	(void)wangapi;
}

