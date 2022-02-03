#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

struct 		array
{
	int		size;
	int		max;
	int     min;
} 			s_array;

typedef struct score
{
	int		ra;
	int		rra;
	int		rb;
	int		rrb;
	int		rr;
	int		rrr;
	int		score;
}			t_score;

struct		core
{
	t_score	current;
	t_score	best;
	int		max;
	int		mid;
	int		c_a;
	int		c_b;
	int		*C;
	int		*A;
	int		*B;
	int		c_c;
}			s_core;


void		is_sorted(void);
void		is_repeated(int *A);
void 		indexer(int size);
void		markup(int *A, int size, int index, int prev);
void		remark(int *A, int size);
int			find_min(int *A, int size);
int 		find_max(int *A, int size);
void		push_to_b(void);
void		swap(int *A, int n);
void		sort_three(int *A);
void		five_sort(void);
int			find_position(int *A, int num, int size);
void		push_smallest(int a, int b);
void		perform(int *A, int *B);
void		compute(int *A, int *B);
void		keep_me(int *A, int *C, int c_a);
void		finito(int *A, int *B);
void		sort(void);

void		sb(void);
void		sa(void);
void		ss(void);
void		pa(void);
void		pb(void);
void		ra(void);
void		rb(void);
void		rr(void);
void		rra(void);
void		rrb(void);
void		rrr(void);

# endif