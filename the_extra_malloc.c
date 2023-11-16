#include "monty.h"

/**
 * ukoloni_uangamizwe - wachilia bana
 * @wachilia_this: wachilia this
 * Return: onge
 */
void ukoloni_uangamizwe(char **wachilia_this)
{
	int v;

	if (!wachilia_this || !*wachilia_this)
		return;

	for (v = 0; wachilia_this[v]; v++)
	{
		free(wachilia_this[v]);
	}
	free(wachilia_this);
}

