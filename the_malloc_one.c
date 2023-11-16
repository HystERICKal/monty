#include "monty.h"

/**
 * wachilia_mpangilio - hakuna ukoloni hapa
 * @mpangilio: mpangilio wa vitu
 * @wangapi: wangapi kwa list
 * Return: onge
 */
void wachilia_mpangilio(stack_t **mpangilio, unsigned int wangapi)
{
	if (mpangilio == NULL)
		return;

	for (; *mpangilio != NULL;)
		pop(mpangilio, wangapi);
}

