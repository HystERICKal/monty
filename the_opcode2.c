#include "monty.h"

/**
 * _pchar - the char dealer
 * @kichwa: kichwa
 * @wangapi: wangapi
 * Return: onge
 */
void _pchar(stack_t **kichwa, unsigned int wangapi)
{
	if (kichwa == NULL || *kichwa == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pchar, stack empty\n",
				wangapi);
		exit(EXIT_FAILURE);
	}
	if (isascii(placiholder.nambari))
		printf("%c\n", placiholder.nambari);
	else
	{
		dprintf(STDERR_FILENO, "L%d: can't pchar, value out of range\n",
				wangapi);
		exit(EXIT_FAILURE);
	}
}

/**
 * _pstr -string printer
 * @kichwa: kichwa cha list
 * @wangapi: wangapi kwa list
 * Return: onge
 */
void _pstr(stack_t **kichwa, unsigned int wangapi)
{
	stack_t *c;

	(void)wangapi;

	if (kichwa == NULL || *kichwa == NULL || placiholder.nambari == 0)
	{
		printf("\n");
		return;
	}

	for (c = *kichwa; c != NULL && c->n != 0 && isascii(c->n); c = c->next)
	{
		printf("%c", c->n);
	}
	printf("\n");
}

/**
 * _rotl - the rotator
 * @kichwa: kichwa cha list
 * @wangapi: wangapi kwa list
 * Return: onge
 */
void _rotl(stack_t **kichwa, unsigned int wangapi)
{

	stack_t *holdr;

	(void)wangapi;

	if (kichwa == NULL || *kichwa == NULL || (*kichwa)->next == NULL)
		return;

	for (holdr = *kichwa; holdr->next != NULL; holdr = holdr->next)
		continue;

	holdr->next = *kichwa;
	(*kichwa)->prev = holdr;
	*kichwa = (*kichwa)->next;
	(*kichwa)->prev = NULL;
	holdr->next->next = NULL;
}

/**
 * _rotr - the rotator2
 * @kichwa: kichwa cha list
 * @wangapi: wangapi kwa line
 * Return: onge
 */
void _rotr(stack_t **kichwa, unsigned int wangapi)
{

	stack_t *holdr;

	(void)wangapi;

	if (kichwa == NULL || *kichwa == NULL || (*kichwa)->next == NULL)
		return;

	for (holdr = *kichwa; holdr->next != NULL; holdr = holdr->next)
		continue;

	holdr->next = *kichwa;
	holdr->prev->next = NULL;
	holdr->prev = NULL;
	(*kichwa)->prev = holdr;
	*kichwa = holdr;
}

