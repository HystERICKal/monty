#ifndef MONTY_H
#define MONTY_H


#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/types.h>

/**
 * struct nambari - the nambari struct
 * @nambari: struct member
 * Description: the nambari struct
 */
typedef struct nambari
{
	int nambari;
} nambari_s;

extern nambari_s placiholder;
nambari_s placiholder;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _pchar(stack_t **kichwa, unsigned int wangapi);
void _pstr(stack_t **kichwa, unsigned int wangapi);
void _rotl(stack_t **kichwa, unsigned int wangapi);
int ongeza_nodi_mwishoni(stack_t **kichwa, int ongeza_this_node);
void toa_nodi_mwishoni(stack_t **kichwa);
void toa_ukoloni_hapa(stack_t **kichwa);
void _rotr(stack_t **kichwa, unsigned int wangapi);
void add(stack_t **stack, unsigned int wangapi);
void sub(stack_t **stack, unsigned int wangapi);
void pall(stack_t **kichwa, unsigned int wangapi);
void pint(stack_t **kichwa, unsigned int wangapi);
void swap(stack_t **kichwa, unsigned int wangapi);
void katakata(char *sentensi, stack_t **mpangilio, unsigned int wangapi);
void ukoloni_uangamizwe(char **wachilia_this);
void tekeleza_maops(stack_t **mpangilio,
		unsigned int wangapi, char *check_thiss);
void wachilia_mpangilio(stack_t **mpangilio, unsigned int wangapi);
int angalieko_nambari(char *check_thiss);
void nop(stack_t **kichwa, unsigned int wangapi);
void _div(stack_t **stack, unsigned int wangapi);
void _mul(stack_t **stack, unsigned int wangapi);
void _mod(stack_t **stack, unsigned int wangapi);
void push(stack_t **kichwa, unsigned int wangapi);
void pop(stack_t **kichwa, unsigned int wangapi);

#endif

