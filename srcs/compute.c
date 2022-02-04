/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letumany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:37:07 by letumany          #+#    #+#             */
/*   Updated: 2022/02/04 16:55:14 by letumany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	count_ra(int b)
{
	int		i;

	i = 0;
	if (s_core.a[0] > b && s_core.a[s_core.c_a - 1] < b)
	{
		s_core.current.ra = 0;
		return ;
	}
	while (i < s_core.c_a)
	{
		if (b > s_core.a[i] && b < s_core.a[i + 1])
		{
			++i;
			if (i > s_core.c_a / 2)
				s_core.current.rra = s_core.c_a - i;
			else
				s_core.current.ra = i;
			return ;
		}
		++i;
	}
}

void	merge_rr(void)
{
	while (s_core.current.ra && s_core.current.rb)
	{
		++s_core.current.rr;
		--s_core.current.ra;
		--s_core.current.rb;
	}
	while (s_core.current.rra && s_core.current.rrb)
	{
		++s_core.current.rrr;
		--s_core.current.rra;
		--s_core.current.rrb;
	}
}

void	copy_to_best(void)
{
	s_core.best.ra = s_core.current.ra;
	s_core.best.rb = s_core.current.rb;
	s_core.best.rra = s_core.current.rra;
	s_core.best.rrb = s_core.current.rrb;
	s_core.best.rr = s_core.current.rr;
	s_core.best.rrr = s_core.current.rrr;
	s_core.best.score = s_core.current.score;
}

void	score_init_max(void)
{
	s_core.best.ra = 0;
	s_core.best.rb = 0;
	s_core.best.rra = 0;
	s_core.best.rrb = 0;
	s_core.best.rr = 0;
	s_core.best.rrr = 0;
	s_core.best.score = 10000000;
}

void	compute(int max)
{
	int		i;

	i = 0;
	while (i < s_core.c_b)
	{
		if (s_core.b[i] > max)
		{
			i++;
			continue ;
		}
		score_init();
		if (i > s_core.c_b / 2)
			s_core.current.rrb = (s_core.c_b - i);
		else
			s_core.current.rb = i;
		count_ra(s_core.b[i]);
		merge_rr();
		s_core.current.score = s_core.current.ra + s_core.current.rb
			+ s_core.current.rra + s_core.current.rrb
			+ s_core.current.rr + s_core.current.rrr;
		if (s_core.current.score < s_core.best.score)
			copy_to_best();
		++i;
	}
}
