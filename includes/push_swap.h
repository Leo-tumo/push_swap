/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:48:09 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 17:00:23 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

struct		s_array
{
	int		size;
	int		max;
	int		min;
}	s_array;

typedef struct score
{
	int		score;
	int		rrb;
	int		rra;
	int		rrr;
	int		ra;
	int		rb;
	int		rr;
}			t_score;

struct		s_core
{
	t_score	current;
	t_score	best;
	int		max;
	int		mid;
	int		c_a;
	int		c_b;
	int		c_c;
	int		*a;
	int		*b;
	int		*c;
}			s_core;

void		markup_norme(int *i, int *index, int *tmp);
void		markup(int size, int index, int prev);
void		arg_checker(int argc, char **argv);
char		**ft_split(char const *s, char c);
int			find_position(int num, int size);
size_t		length(char const *s, char c);
void		stack_fill(char **av, int ac);
void		check_num(char **av, int ac);
void		check_num(char **av, int ac);
size_t		ft_strlen(const char *s);
void		stack_fill_q(char **av);
void		check_num_q(char *av);
void		check_num_q(char *av);
void		score_init_max(void);
void		push_smallest(int a);
int			ft_error(char *str);
int			find_min(int size);
int			find_max(int size);
void		is_repeated(void);
void		indexer(int size);
void		remark(int size);
void		compute(int max);
void		score_init(void);
int			is_digit(int c);
void		is_sorted(void);
void		push_to_b(void);
void		six_sort(void);
void		perform(void);
void		keep_me(void);
void		rra(int bool);
void		rrb(int bool);
void		ra(int bool);
void		rb(int bool);
void		finito(void);
void		sort(void);
void		rrr(void);
void		sb(void);
void		sa(void);
void		ss(void);
void		pa(void);
void		pb(void);
void		rr(void);

#endif