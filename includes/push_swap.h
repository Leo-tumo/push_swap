/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:48:09 by letumany          #+#    #+#             */
/*   Updated: 2022/02/06 00:57:00 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_start
{
	int		size;
	int		max;
	int		min;
}			t_start;

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

typedef struct s_base
{
	t_start	start;
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
}			t_base;

void		markup_norme(int *i, int *index, int *tmp, t_base *base);
void		markup(int size, int index, int prev, t_base *base);
void		arg_checker(int argc, char **argv, t_base *base);
void		stack_fill(char **av, int ac, t_base *base);
void		stack_fill_q(char **av, t_base *base);
void		check_num_q(char *av, t_base *base);
void		push_smallest(int a, t_base *base);
char		**ft_split(char const *s, char c);
int			find_min(int size, t_base *base);
int			find_max(int size, t_base *base);
int			find_position(int num, int size);
void		indexer(int size, t_base *base);
void		remark(int size, t_base *base);
void		compute(int max, t_base *base);
size_t		length(char const *s, char c);
void		check_num(char **av, int ac);
void		score_init_max(t_base *base);
void		rrb(int bool, t_base *base);
void		rra(int bool, t_base *base);
void		ra(int bool, t_base *base);
void		rb(int bool, t_base *base);
void		is_repeated(t_base *base);
size_t		ft_strlen(const char *s);
void		score_init(t_base *base);
void		is_sorted(t_base *base);
void		push_to_b(t_base *base);
void		six_sort(t_base *base);
void		perform(t_base *base);
void		keep_me(t_base *base);
void		finito(t_base *base);
int			ft_error(char *str);
void		sort(t_base *base);
void		rrr(t_base *base);
void		sb(t_base *base);
void		sa(t_base *base);
void		ss(t_base *base);
void		pa(t_base *base);
void		pb(t_base *base);
void		rr(t_base *base);
int			is_digit(int c);
int			ft_atoi(const char *str);

#endif