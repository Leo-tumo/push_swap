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
	// int		index;
	// int		value;
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
	int		c_c;
}			s_core;


void		is_sorted(int *A);
void		is_repeated(int *A);
void 		indexer(int *A, int size);
void		markup(int *A, int size, int index, int prev);
void		remark(int *A, int size);
int			find_min(int *A, int size);
int 		find_max(int *A, int size);
void		push_to_b(int *A, int *B);
void		swap(int *A, int n);
void		sort_three(int *A, int *B);
void		five_sort(int *A, int *B, int size);
int			find_position(int *A, int num, int size);
void		push_smallest(int *A, int *B, int size);
void		perform(int *A, int *B);
void		compute(int *A, int *B);
void		keep_me(int *A, int *C, int c_a);
void		finito(int *A, int *B);
void		sort(int *A, int *B);

void		sb(int *B);
void		sa(int *A);
void		ss(int *A, int *B);
void		pa(int *A, int *B, int c_a, int c_b);
void		pb(int *A, int *B, int c_a, int c_b);
void		ra(int *A, int c_a);
void		rb(int *B, int c_b);
void		rr(int *A, int *B, int c_a, int c_b);
void		rra(int *A, int c_a);
void		rrb(int *B, int c_b);
void		rrr(int *A, int *B, int c_a, int c_b);

# endif