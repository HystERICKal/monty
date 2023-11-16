#include "monty.h"

/**
 * angalieko_nambari - is number?
 * @check_thiss: check this please
 * Return: 1 or 0
 */
int angalieko_nambari(char *check_thiss)
{
	if (!check_thiss)
		return (0);
	if (*check_thiss == '-')
		check_thiss++;

	for (; *check_thiss != '\0'; check_thiss++)
	{
		if (!isdigit(*check_thiss))
			return (0);
	}
	check_thiss++;
	return (1);
}

