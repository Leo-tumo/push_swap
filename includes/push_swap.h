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
void		is_repeated(void);
void 		indexer(int size);
void		markup(int size, int index, int prev);
void		remark(int size);
int			find_min(int size);
int 		find_max(int size);
void		push_to_b(void);
void		swap(int n);
void		sort_three(void);
void		four_sort(void);
void		five_sort(void);
int			find_position(int num, int size);
void		push_smallest(int a);
void		perform(void);
void		compute(void);
void		keep_me(void);
void		finito(void);
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