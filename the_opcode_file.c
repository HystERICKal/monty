#include "monty.h"

/**
 * tekeleza_maops - ops code
 * @mpangilio: mpangilio
 * @wangapi: wangapi
 * @check_thiss: chek this put
 * Return: onge
 */
void tekeleza_maops(stack_t **mpangilio,
		unsigned int wangapi, char *check_thiss)
{
	int v;
	instruction_t the_opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{NULL, NULL}};

	for (v = 0; the_opcodes[v].opcode != NULL; v++)
	{
		if (strcmp(check_thiss, the_opcodes[v].opcode) == 0)
		{
			the_opcodes[v].f(mpangilio, wangapi);
			return;
		}
	}

	printf("L%d: unknown instruction %s\n", wangapi, check_thiss);
	wachilia_mpangilio(mpangilio, wangapi);
	exit(EXIT_FAILURE);
}

