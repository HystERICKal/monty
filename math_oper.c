#include "monty.h"

/**
 * add - the add function
 * @mpangilio: mpangilio wa vitu
 * @wangapi: wa ngapi kwa laini
 * Return: nothing
 */
void add(stack_t **mpangilio, unsigned int wangapi)
{
	int jumlisha;

	if (mpangilio == NULL || *mpangilio == NULL || (*mpangilio)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n",
				wangapi);
		wachilia_mpangilio(mpangilio, wangapi);
		exit(EXIT_FAILURE);
	}

	jumlisha = placiholder.nambari;
	pop(mpangilio, wangapi);
	jumlisha = jumlisha + placiholder.nambari;
	pop(mpangilio, wangapi);
	placiholder.nambari = jumlisha;
	push(mpangilio, wangapi);
}

/**
 * sub - the sub function
 * @mpangilio: mpangilio wa vitu
 * @wangapi: wa ngapi kwa laini
 * Return: nothing
 */
void sub(stack_t **mpangilio, unsigned int wangapi)
{
	int kutoa;

	if (mpangilio == NULL || *mpangilio == NULL || (*mpangilio)->next == NULL)
	{
		printf("L%d: can't sub, stack too short\n", wangapi);
		wachilia_mpangilio(mpangilio, wangapi);
		exit(EXIT_FAILURE);
	}

	kutoa = placiholder.nambari;
	pop(mpangilio, wangapi);
	kutoa = placiholder.nambari - kutoa;
	pop(mpangilio, wangapi);
	placiholder.nambari = kutoa;
	push(mpangilio, wangapi);
}

/**
 * _div - the div function
 * @mpangilio: mpangilio wa vitu
 * @wangapi: wa ngapi kwa laini
 * Return: nothing
 */
void _div(stack_t **mpangilio, unsigned int wangapi)
{
	int gawanya;

	if (mpangilio == NULL || *mpangilio == NULL || (*mpangilio)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't div, stack too short\n",
				wangapi);
		wachilia_mpangilio(mpangilio, wangapi);
		exit(EXIT_FAILURE);
	}
	if (placiholder.nambari == 0)
	{
		dprintf(STDERR_FILENO, "L%d: division by zero\n",
				wangapi);
		wachilia_mpangilio(mpangilio, wangapi);
		exit(EXIT_FAILURE);
	}

	gawanya = placiholder.nambari;
	pop(mpangilio, wangapi);
	gawanya = placiholder.nambari / gawanya;
	pop(mpangilio, wangapi);
	placiholder.nambari = gawanya;
	push(mpangilio, wangapi);
}

/**
 * _mul - the multiplication function
 * @mpangilio: mpangilio wa vitu
 * @wangapi: wa ngapi kwa laini
 * Return: nothing
 */
void _mul(stack_t **mpangilio, unsigned int wangapi)
{
	int zalisha;

	if (mpangilio == NULL || *mpangilio == NULL || (*mpangilio)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't mul, stack too short\n",
				wangapi);
		wachilia_mpangilio(mpangilio, wangapi);
		exit(EXIT_FAILURE);
	}

	zalisha = placiholder.nambari;
	pop(mpangilio, wangapi);
	zalisha = placiholder.nambari * zalisha;
	pop(mpangilio, wangapi);
	placiholder.nambari = zalisha;
	push(mpangilio, wangapi);
}

/**
 * _mod -the modulus one
 * @mpangilio: mpangilio wa vitu
 * @wangapi: wa ngapi kwa laini
 * Return: nothing
 */
void _mod(stack_t **mpangilio, unsigned int wangapi)
{
	int bakshi;

	if (mpangilio == NULL || *mpangilio == NULL || (*mpangilio)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't mod, stack too short\n",
				wangapi);
		wachilia_mpangilio(mpangilio, wangapi);
		exit(EXIT_FAILURE);
	}
	if (placiholder.nambari == 0)
	{
		printf("L%d: division by zero\n", wangapi);
		wachilia_mpangilio(mpangilio, wangapi);
		exit(EXIT_FAILURE);
	}

	bakshi = placiholder.nambari;
	pop(mpangilio, wangapi);
	bakshi = placiholder.nambari % bakshi;
	pop(mpangilio, wangapi);
	placiholder.nambari = bakshi;
	push(mpangilio, wangapi);
}

