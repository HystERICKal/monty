#include "monty.h"

/**
 *ongeza_nodi_mwishoni - the node inserter
 *@kichwa: kichwa ya list
 *@ongeza_this_node: ongeza this
 *Return: 0
 */
int ongeza_nodi_mwishoni(stack_t **kichwa, int ongeza_this_node)
{
	stack_t *mpya_kapsaa = NULL;

	if (!kichwa)
		return (-1);

	mpya_kapsaa = malloc(sizeof(stack_t));
	if (!mpya_kapsaa)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	mpya_kapsaa->n = ongeza_this_node;
	if (*kichwa == NULL)
	{
		*kichwa = mpya_kapsaa;
		mpya_kapsaa->next = NULL;
		mpya_kapsaa->prev = NULL;
	}
	else
	{
		mpya_kapsaa->next = *kichwa;
		(*kichwa)->prev = mpya_kapsaa;
		*kichwa = mpya_kapsaa;
	}

	return (0);
}

/**
 *toa_nodi_mwishoni - toa ya mwisho
 *@kichwa: kichwa ya list
 *Return: onge
 */
void toa_nodi_mwishoni(stack_t **kichwa)
{
	stack_t *kaondoe = NULL;

	kaondoe = *kichwa;
	if ((*kichwa)->next == NULL)
	{
		*kichwa = NULL;
		free(kaondoe);
	}
	else
	{
		*kichwa = (*kichwa)->next;
		(*kichwa)->prev = NULL;
		free(kaondoe);
	}
}

/**
 * toa_ukoloni_hapa - toa ukoloni hapa!
 * @kichwa: kichwa ya list
 */
void toa_ukoloni_hapa(stack_t **kichwa)
{
	if (!kichwa)
		return;

	for (; *kichwa && (*kichwa)->next;)
	{
		*kichwa = (*kichwa)->next;
		free((*kichwa)->prev);
	}
	free(*kichwa);
}

